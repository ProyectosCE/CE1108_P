#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <string>
#include <deque>
#include <unordered_map>
#include <memory>
#include <vector>
#include <stdexcept>
#include <iostream>

// Enum para los tipos
// Se debe ajustar según los tipos de tu lenguaje
enum class Type {
    INT,
    BOOL,
    STRING,
    COLOR,
    ERROR,
    INTEXP,  // expresión matemática que resulta en int
    BOOLEXP // expresión lógica que resulta en bool
};

inline bool tiposEquivalentes(Type a, Type b) {
    if ((a == Type::INT && b == Type::INTEXP) || (a == Type::INTEXP && b == Type::INT)) return true;
    if ((a == Type::BOOL && b == Type::BOOLEXP) || (a == Type::BOOLEXP && b == Type::BOOL)) return true;
    return a == b;
}

// Enum para los colores disponibles
enum class Color {
    ROJO,
    VERDE,
    AZUL
};

typedef Color TipoColor;

// Clase Symbol
class Symbol {
public:
    std::string name;
    Type type;
    Symbol(const std::string& name, Type type) : name(name), type(type) {}
};

// Clase SymbolTable
class SymbolTable {
private:
    std::deque<std::unordered_map<std::string, std::shared_ptr<Symbol>>> scopes;
public:
    SymbolTable() { pushScope(); }
    void pushScope() { scopes.push_front({}); }
    void popScope() {
        if (scopes.empty()) throw std::runtime_error("No hay scope para cerrar");
        scopes.pop_front();
    }
    bool insert(const std::string& name, Type type) {
        auto& top = scopes.front();
        if (top.count(name)) return false;
        top[name] = std::make_shared<Symbol>(name, type);
        return true;
    }
    std::shared_ptr<Symbol> lookup(const std::string& name) {
        for (auto& scope : scopes) {
            auto it = scope.find(name);
            if (it != scope.end()) return it->second;
        }
        return nullptr;
    }
};

// Clase ErrorReporter
class ErrorReporter {
private:
    std::vector<std::string> errors;
public:
    void error(int line, const std::string& msg) { errors.push_back("Linea " + std::to_string(line) + ": " + msg); }
    bool hasErrors() const { return !errors.empty(); }
    void printAll() const { for (const auto& e : errors) std::cout << e << std::endl; }
};

#endif // SYMBOLTABLE_H
