//
// Created by amv22 on 27/9/2025.
//

#ifndef CODEGEN_H
#define CODEGEN_H

#pragma once

#include "antlr4-runtime.h"
#include <string>
#include <fstream>
#include "gen/LogotecGramarBaseVisitor.h"
#include "gen/LogotecGramarParser.h"
#include "SymbolTable.h"
#include "TypeChecker.h"
#include "ProcedimientosGen.h"

using namespace std;


class CodeGen : public LogotecGramarBaseVisitor {
public:
    CodeGen();

    // Devuelve el código generado principal (para setup)
    std::string getCodigoMain() const { return codigoMain; }

    unordered_map<string,string> tablaTipos;

    bool hayError = false; // <-- flag de error

    procedimientos::ProcedimientosGen procGen;

    void reset() {
        tablaTipos.clear();
        hayError = false;
        procGen = procedimientos::ProcedimientosGen();
        symbolTable = SymbolTable();
        errorReporter = ErrorReporter();
    }

    // top‐level visitors
    virtual antlrcpp::Any visitPrograma(LogotecGramarParser::ProgramaContext *ctx) override;
    virtual antlrcpp::Any visitLinea_instrucciones(LogotecGramarParser::Linea_instruccionesContext *ctx) override;
    virtual antlrcpp::Any visitHaz_variable(LogotecGramarParser::Haz_variableContext *ctx) override;
    virtual antlrcpp::Any visitInic_variable(LogotecGramarParser::Inic_variableContext *ctx) override;
    virtual any visitExpr(LogotecGramarParser::ExprContext *ctx) override;
    virtual any visitInc_variable(LogotecGramarParser::Inc_variableContext *context) override;

    std::any visitAvanza_variable(LogotecGramarParser::Avanza_variableContext *ctx);

    any visitRetrocede_variable(LogotecGramarParser::Retrocede_variableContext *ctx);

    any visitGira_derecha_variable(LogotecGramarParser::Gira_derecha_variableContext *context) override;

    any visitGira_izquierda_variable(LogotecGramarParser::Gira_izquierda_variableContext *ctx);

    any visitOcultar_tortuga_variable(LogotecGramarParser::Ocultar_tortuga_variableContext *ctx);

    any visitPonpos_variable(LogotecGramarParser::Ponpos_variableContext *ctx);

    any visitPonxy_variable(LogotecGramarParser::Ponxy_variableContext *ctx);

    any visitPonrumbo_variable(LogotecGramarParser::Ponrumbo_variableContext *ctx);

    std::any visitComentario(LogotecGramarParser::ComentarioContext *ctx);

    void agregarComentarioLinea(LogotecGramarParser::InstruccionContext *ctx);

    void agregarComentario(LogotecGramarParser::InstruccionContext *ctx);

    virtual any visitBajalapiz_variable(LogotecGramarParser::Bajalapiz_variableContext *context) override;
    virtual any visitSubelapiz_variable(LogotecGramarParser::Subelapiz_variableContext *context) override;
    virtual any visitCentro_variable(LogotecGramarParser::Centro_variableContext *context) override;
    virtual any visitEsperar_variable(LogotecGramarParser::Esperar_variableContext *context) override;
    virtual any visitPoncolorlapiz_variable(LogotecGramarParser::Poncolorlapiz_variableContext *context) override;

    any visitProcedimiento(LogotecGramarParser::ProcedimientoContext *ctx);

    any visitProcedimiento_llamado(LogotecGramarParser::Procedimiento_llamadoContext *ctx);

    virtual any visitPonx_variable(LogotecGramarParser::Ponx_variableContext *context) override;
    virtual any visitPony_variable(LogotecGramarParser::Pony_variableContext *context) override;

private:
    SymbolTable symbolTable;
    ErrorReporter errorReporter;

    // code buffers
    std::string codigoHeader;
    std::string codigoMain;
    std::string codigoFooter;

    void error(const std::string &msg) {
        cerr << "Error: " << msg << endl;
        hayError = true;
    }

    string inferTipo(LogotecGramarParser::ExprContext *ctx);

    // Verifica recursivamente que una expresión matemática sea válida y retorna su tipo
    std::string checkMathExpr(LogotecGramarParser::ExprContext* ctx);
    std::string checkMathExpr(LogotecGramarParser::Exp_integerContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Exp_matematicaContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Exp_aritmeticaContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Expr_mat_aritmContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Diferencia_exprContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Producto_exprContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Suma_exprContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Division_exprContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Potencia_exprContext *ctx);
    std::string checkMathExpr(LogotecGramarParser::Azar_exprContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::ExprContext* ctx);

    std::string generarExprCodigo(LogotecGramarParser::Rumbo_getContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Exp_integerContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Exp_matematicaContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Exp_aritmeticaContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Exp_logicaContext *ctx);

    string generarExprCodigo(LogotecGramarParser::OperacionLogicaSimpleContext *ctx);

    string generarExprCodigo(LogotecGramarParser::OperacionLogicaComplejaContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Exp_logicas_exprContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Exp_logica_operacionesContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Iguales_variableContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Y_variableContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::O_variableContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Mayorque_variableContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Menorque_variableContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::LogicoContext *ctx);

    any visitEjecuta_variable(LogotecGramarParser::Ejecuta_variableContext *ctx);

    any visitRepite_variable(LogotecGramarParser::Repite_variableContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::NegacionContext *ctx);

    string checkLogicExpr(LogotecGramarParser::ExpLogicaSimpleContext *ctx);

    string checkLogicExpr(LogotecGramarParser::ExpLogicaParentesisContext *ctx);

    string checkLogicExpr(LogotecGramarParser::OperacionLogicaSimpleContext *ctx);

    string checkLogicExpr(LogotecGramarParser::OperacionLogicaComplejaContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::Exp_logicaContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::Exp_logica_operacionesContext *ctx);

    int checkLogicExpr(int _cpp_par_);

    std::string checkLogicExpr(LogotecGramarParser::Exp_logicas_exprContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::Iguales_variableContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::Y_variableContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::O_variableContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::Menorque_variableContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::Mayorque_variableContext *ctx);

    std::string checkLogicExpr(LogotecGramarParser::LogicoContext *ctx);

    any visitSi_variable(LogotecGramarParser::Si_variableContext *ctx);

    any visitSi_sino_variable(LogotecGramarParser::Si_sino_variableContext *ctx);

    any visitHaz_hasta_variable(LogotecGramarParser::Haz_hasta_variableContext *ctx);

    any visitHasta_variable(LogotecGramarParser::Hasta_variableContext *ctx);

    any visitHaz_mientras_variable(LogotecGramarParser::Haz_mientras_variableContext *ctx);

    any visitMientras_variable(LogotecGramarParser::Mientras_variableContext *ctx);

    any visitMuestra(LogotecGramarParser::MuestraContext *ctx);

    std::string generarExprCodigo(LogotecGramarParser::Expr_mat_aritmContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Diferencia_exprContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Producto_exprContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Suma_exprContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Division_exprContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Potencia_exprContext *ctx);
    std::string generarExprCodigo(LogotecGramarParser::Azar_exprContext *ctx);

};


#endif //CODEGEN_H