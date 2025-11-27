#include "SymbolTable.h"
#include "gen/LogotecGramarParser.h"
#include <string>



std::string getnombre(LogotecGramarParser::Variable_nombreContext *ctx) {
    std::string nombre = ctx->ID()->getText();
    return nombre;
}

// Función para identificar el tipo de una expresión
Type getExprType(LogotecGramarParser::ExprContext* ctx, SymbolTable& symtab) {
    if (ctx->exp_integer()) return Type::INT;
    if (ctx->exp_logica()) return Type::BOOL;
    if (ctx->CADENA_TEXTO()) return Type::STRING;
    if (ctx->colores()) return Type::COLOR;
    if (ctx->variable_nombre()) {
        auto sym = symtab.lookup(getnombre(ctx->variable_nombre()));
        if (sym) return sym->type;
        return Type::ERROR;
    }
    if (ctx->exp_integer()) {
        return Type::INTEXP;
    }
    return Type::ERROR;
}

// Inferencia de tipo para ValorContext
Type getValorType(LogotecGramarParser::ExprContext* ctx, SymbolTable& symtab) {
    if (ctx->exp_integer()) return Type::INT;
    if (ctx->exp_logica()) return Type::BOOL;
    if (ctx->CADENA_TEXTO()) return Type::STRING;
    if (ctx->colores()) return Type::COLOR;
    if (ctx->NUMBER()) {
        return Type::INT;
    }
    if (ctx->variable_nombre()) {
        auto sym = symtab.lookup(getnombre(ctx->variable_nombre()));
        if (sym) return sym->type;
        return Type::ERROR;
    }
    if (ctx->exp_integer()) {
        return Type::INTEXP;
    }
    return Type::ERROR;
}