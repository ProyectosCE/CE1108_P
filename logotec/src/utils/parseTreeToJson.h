#ifndef LOGOTEC_PARSETREETOJSON_H
#define LOGOTEC_PARSETREETOJSON_H

#pragma once

#include <antlr4-runtime.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

/* Function: buildJsonFromANTLR
   Descripción:
     Construye un objeto JSON a partir de un árbol sintáctico de ANTLR.

     La función recorre recursivamente el árbol (`ParseTree`) generado por ANTLR4
     y produce un objeto JSON que refleja su estructura jerárquica.
     Cada nodo del árbol incluye el nombre de la regla si es una producción,
     o el texto del token si es un nodo hoja.

   Params:
     - t: Puntero al nodo raíz del árbol sintáctico (`antlr4::tree::ParseTree`).
     - parser: Puntero al parser de ANTLR utilizado para obtener los nombres de las reglas.

   Returns:
     - json: Objeto JSON que representa la estructura del árbol.

   Restricciones:
     - El puntero `t` no debe ser nulo.
     - El puntero `parser` debe corresponder al parser que generó el árbol.
     - La función asume que `ctx->children` es accesible y válida.

   Ejemplo:
     {
       "text": "expression",
       "children": [
         {"text": "NUMBER"},
         {"text": "+"},
         {"text": "NUMBER"}
       ]
     }
*/
inline json buildJsonFromANTLR(antlr4::tree::ParseTree* t, antlr4::Parser* parser) {
    if (!t) return nullptr;

    json j;

    if (auto terminal = dynamic_cast<antlr4::tree::TerminalNode*>(t)) {
        j["text"] = terminal->getText(); // Nodo hoja: contiene el texto del token.
    }
    else if (auto ctx = dynamic_cast<antlr4::ParserRuleContext*>(t)) {
        j["text"] = parser->getRuleNames()[ctx->getRuleIndex()]; // Nombre de la regla.

        j["children"] = json::array();
        for (auto child : ctx->children) {
            j["children"].push_back(buildJsonFromANTLR(child, parser));
        }
    }

    return j;
}

#endif // LOGOTEC_PARSETREETOJSON_H
