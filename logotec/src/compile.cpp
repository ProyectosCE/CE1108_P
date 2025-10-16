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

    tree::ParseTree* tree = parser.programa();

    CodeGen generator;
    generator.reset();
    generator.visit(tree);

    if (generator.hayError) {
        cerr << "Compilación cancelada debido a errores semánticos." << endl;
        return 1;
    }

    std::filesystem::create_directories("./out");

    // Guardar árbol JSON
    json treeJson = buildJsonFromANTLR(tree, &parser);
    std::ofstream treeOut("./out/tree.json");
    treeOut << treeJson.dump(4);
    treeOut.close();

    // Generar archivo .cpp
    std::ofstream outFile("./out/logotec.cpp");
    if (!outFile.is_open()) {
        cerr << "Error al crear el archivo de salida." << endl;
        return 1;
    }

    outFile << "#include <iostream>\n";
    outFile << "#include <string>\n";
    outFile << "using namespace std;\n\n";
    outFile << "int main() {\n";
    outFile << generator.codigo;
    outFile << "return 0;\n";
    outFile << "}\n";

    outFile.close();

    cout << "Archivo generado en out/logotec.cpp" << endl;
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
