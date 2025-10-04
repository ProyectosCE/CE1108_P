//
// Created by amv22 on 4/10/2025.
//

#include "ProcedimientosGen.h"

using namespace procedimientos;
using namespace std;

// Esta clase almacena la lista de procedimientos que se encuentren, para adañadirlos fuera de main
// en el código generado.

ProcedimientosGen::ProcedimientosGen() {}

bool ProcedimientosGen::registrarProcedimiento(const string& nombre, const vector<pair<string, string>>& parametros, const string& cuerpo) {
    // Verificar si ya existe un procedimiento con la misma firma (nombre, cantidad y tipos de parámetros)
    for (const auto& proc : procedimientos) {
        if (proc.nombre == nombre && proc.parametros.size() == parametros.size()) {
            bool tiposIguales = true;
            for (size_t i = 0; i < parametros.size(); ++i) {
                if (proc.parametros[i].first != parametros[i].first) {
                    tiposIguales = false;
                    break;
                }
            }
            if (tiposIguales) {
                return false; // Firma duplicada
            }
        }
    }
    ProcedimientoInfo info{nombre, parametros, cuerpo};
    procedimientos.push_back(info);
    return true;
}

string ProcedimientosGen::generarCodigoProcedimientos() const {
    string codigo;
    for (const auto& proc : procedimientos) {
        codigo += "void " + proc.nombre + "(";
        for (size_t i = 0; i < proc.parametros.size(); ++i) {
            if (i > 0) codigo += ", ";
            codigo += proc.parametros[i].first + " " + proc.parametros[i].second;
        }
        codigo += ") {\n";
        codigo += proc.cuerpo;
        codigo += "}\n\n";
    }
    return codigo;
}