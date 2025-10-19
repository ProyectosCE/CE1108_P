#include "compile.h"
#include <iostream>
#include <fstream>
#include <filesystem>

#include "antlr4-runtime.h"
#include "CodeGen.h"
#include "gen/LogotecGramarLexer.h"
#include "gen/LogotecGramarParser.h"
#include "utils/parseTreeToJson.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

// ------------------
// BailErrorListener
// ------------------
class BailErrorListener : public antlr4::BaseErrorListener {
public:
    void syntaxError(Recognizer *recognizer, Token *offendingSymbol,
                     size_t line, size_t charPositionInLine,
                     const std::string &msg, std::exception_ptr e) override {
        throw std::runtime_error("Syntax error at line " + std::to_string(line) +
                                 ":" + std::to_string(charPositionInLine) + " -> " + msg);
    }
};

// ------------------
// CompileFile
// ------------------
int Compiler::compileFile(const std::string& programPath) {
    cout << "Interpreting file: " << programPath << endl;

    std::ifstream stream(programPath);
    if (!stream.is_open()) {
        cerr << "Could not open file: " << programPath << endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    LogotecGramarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LogotecGramarParser parser(&tokens);

    parser.removeErrorListeners();
    parser.addErrorListener(new BailErrorListener());

    ParseTree* tree = nullptr;
    CodeGen generator;

    try {
        generator.reset();
        tree = parser.programa();
        generator.visit(tree);

        if (generator.hayError) {
            cerr << "Compilación cancelada debido a errores semánticos." << endl;
            return 1;
        }

    } catch (const std::runtime_error &e) {
        cerr << "Error de sintaxis: " << e.what() << endl;
        return 1;
    }

    std::filesystem::create_directories("../out_files");

    // Guardar árbol JSON
    json treeJson = buildJsonFromANTLR(tree, &parser);
    std::ofstream treeOut("../out_files/tree.json");
    treeOut << treeJson.dump(4);
    treeOut.close();

    // Generar archivo .cpp
    std::ofstream outFile("../out_files/out_files.ino");
    if (!outFile.is_open()) {
        cerr << "Error al crear el archivo de salida." << endl;
        return 1;
    }

    outFile << "#include \"turtle_hw.h\"\n";
    outFile << generator.codigo;
    outFile << "}\n";
    outFile << "\nvoid loop() {\n}\n";
    outFile.close();

    cout << "Archivo generado en out_files/out_files.ino" << endl;
    return 0;
}

void Compiler::clear() {
    // Limpieza de archivos generados
    try {
        std::filesystem::remove("./out/tree.json");
        std::filesystem::remove("./out/logotec.cpp");
    } catch (...) {
        // Ignorar errores si los archivos no existen
    }
}
