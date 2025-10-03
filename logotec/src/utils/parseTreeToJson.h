//
// Created by jimmy on 2/10/25.
//

#ifndef LOGOTEC_PARSETREETOJSON_H
#define LOGOTEC_PARSETREETOJSON_H

#pragma once

#include <antlr4-runtime.h>
#include <nlohmann/json.hpp>

using json = nlohmann::json;


inline json buildJsonFromANTLR(antlr4::tree::ParseTree* t, antlr4::Parser* parser) {
    if (!t) return nullptr;

    json j;

    if (auto terminal = dynamic_cast<antlr4::tree::TerminalNode*>(t)) {
        j["text"] = terminal->getText(); // nodos hoja
    }
    else if (auto ctx = dynamic_cast<antlr4::ParserRuleContext*>(t)) {
        // Nombre de regla legible
        j["text"] = parser->getRuleNames()[ctx->getRuleIndex()];

        j["children"] = json::array();
        for (auto child : ctx->children) {
            j["children"].push_back(buildJsonFromANTLR(child, parser));
        }
    }

    return j;
}


#endif //LOGOTEC_PARSETREETOJSON_H