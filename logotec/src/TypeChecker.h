//
// Created by jose_barquero on 19/10/25.
//

#ifndef LOGOTEC_TYPECHECKER_H
#define LOGOTEC_TYPECHECKER_H

#include "gen/LogotecGramarParser.h"
#include "SymbolTable.h"

Type getExprType(LogotecGramarParser::ExprContext* ctx, SymbolTable& symtab);
Type getValorType(LogotecGramarParser::ExprContext* ctx, SymbolTable& symtab);

#endif //LOGOTEC_TYPECHECKER_H