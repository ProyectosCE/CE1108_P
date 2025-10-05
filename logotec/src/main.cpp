#include <iostream>
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "CodeGen.h"
#include "gen/LogotecGramarLexer.h"
#include "gen/LogotecGramarParser.h"
#include <filesystem>

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

int main(int argc, const char* argv[]) {

    const string EXTENSION = "lt";
    string program = (argc > 1) ? argv[1] : "../main_haz." + EXTENSION;

    cout << "Interpreting file: " << program << endl;

    std::ifstream stream;
    stream.open(program);
    if (!stream) {
        std::cerr << "Could not open file: " << program << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    LogotecGramarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LogotecGramarParser parser(&tokens);

    tree::ParseTree* tree = parser.programa();

    //SemanticVisitor visitor;
    //visitor.visit(tree);

    // Visitor / CodeGen
    CodeGen generator;
    generator.visit(tree);


    if (generator.hayError) {
        std::cerr << "Compilación cancelada debido a errores semánticos." << std::endl;
        return 1;
    }

    // Crear carpeta /out/ si no existe
    std::filesystem::create_directories("./out");

    // Abrir archivo de salida
    std::ofstream outFile("./out/logotec.cpp");
    if (!outFile.is_open()) {
        std::cerr << "Error al crear el archivo de salida." << std::endl;
        return 1;
    }

    // Escribir código completo
    outFile << "#include <iostream>\n";
    outFile << "#include <string>\n";
    outFile << "using namespace std;\n\n";

    outFile << generator.codigo;

    outFile.close();
    std::cout << "Archivo generado en out/logotec.cpp" << std::endl;

    return 0;
}



