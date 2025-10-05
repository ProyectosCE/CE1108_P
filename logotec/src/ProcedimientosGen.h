//
// Created by amv22 on 4/10/2025.
//

#ifndef PROCEDIMIENTOSGEN_H
#define PROCEDIMIENTOSGEN_H

#include <string>
#include <vector>
#include <tuple>

namespace procedimientos {

struct ProcedimientoInfo {
    std::string nombre;
    std::vector<std::pair<std::string, std::string>> parametros; // par (tipo, nombre)
    std::string cuerpo;
};

class ProcedimientosGen {
public:
    ProcedimientosGen();
    // Devuelve true si se registró, false si ya existía la firma
    bool registrarProcedimiento(const std::string& nombre, const std::vector<std::pair<std::string, std::string>>& parametros, const std::string& cuerpo);
    std::string generarCodigoProcedimientos() const;
private:
    std::vector<ProcedimientoInfo> procedimientos;
};

} // namespace procedimientos

#endif //PROCEDIMIENTOSGEN_H
