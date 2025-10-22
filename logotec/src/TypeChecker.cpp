#include "TypeChecker.h"
#include "antlr4-runtime.h"

Type getExprType(LogotecGramarParser::ExprContext* ctx, SymbolTable& symtab) {
    if (!ctx) return Type::ERROR;

    // Buscar un token ID en la expresión (método genérico de ANTLR4)
    // Nota: getToken(TOKEN_TYPE, i) es seguro aunque no exista ID: retorna nullptr
    auto tokId = ctx->getToken(LogotecGramarParser::ID, 0);
    if (tokId) {
        const std::string name = tokId->getText();
        if (auto sym = symtab.lookup(name)) {
            return sym->type;  // Tipo declarado previamente (Haz ...)
        } else {
            return Type::ERROR; // ID no declarado
        }
    }

    // Default: INT (para no romper generación de código en movimientos numéricos)
    return Type::INT;
}

Type getValorType(LogotecGramarParser::ExprContext* ctx, SymbolTable& symtab) {
    // Por ahora, mismo comportamiento que getExprType
    // Si luego se separa "valor" de "expr", se podrá especializar aquí
    return getExprType(ctx, symtab);
}