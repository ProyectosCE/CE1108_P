#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

#include "antlr4-runtime.h"
#include "CodeGen.h"
#include "gen/LogotecGramarLexer.h"
#include "gen/LogotecGramarParser.h"
#include "SemanticVisitor.h"

#include "compile.h"

using namespace std;
using namespace antlr4;
using namespace antlr4::tree;

int compileFile(const std::string& program) {
    cout << "Interpreting file: " << program << endl;

    std::ifstream stream(program);
    if (!stream) {
        std::cerr << "Could not open file: " << program << std::endl;
        return 1;
    }

    ANTLRInputStream input(stream);
    LogotecGramarLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    LogotecGramarParser parser(&tokens);

    tree::ParseTree* tree = parser.programa();

    SemanticVisitor visitor;
    visitor.visit(tree);

    CodeGen generator;
    generator.visit(tree);

    if (generator.hayError) {
        std::cerr << "Compilación cancelada debido a errores semánticos." << std::endl;
        return 1;
    }

    std::filesystem::create_directories("./out");

    std::ofstream outFile("./out/logotec.cpp");
    if (!outFile.is_open()) {
        std::cerr << "Error al crear el archivo de salida." << std::endl;
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
    std::cout << "Archivo generado en out/logotec.cpp" << std::endl;

    return 0;
}
