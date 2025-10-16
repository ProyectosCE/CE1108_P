//
// Created by jimmy on 1/10/25.
//

#ifndef LOGOTEC_COMPILE_H
#define LOGOTEC_COMPILE_H

#include <string>

class Compiler {
public:
    Compiler() = default;
    int compileFile(const std::string& programPath);
    void clear();
};

#endif //LOGOTEC_COMPILE_H