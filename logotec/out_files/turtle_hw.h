#ifndef LOGOTEC_TURTLE_HW_H
#define LOGOTEC_TURTLE_HW_H

#include <Arduino.h>
#include <cstdlib>
#include <iostream>

void initTurtle();

// comandos tipo turtle
void avanzaTortuga(double n);
void retrocedeTortuga(double n);
void giraDerecha(double grados);
void giraIzquierda(double grados);
void ocultaTortuga();
void ponPos(double x, double y);
void ponRumbo(double grados);
//double getRumbo() const { return m_angleDeg; }
void ponX(double x);
void ponY(double y);
void bajaLapiz();
void subeLapiz();
void ponColorLapiz(const char* color);
void centro();
void esperar(int n); // n/60 s

// Alias de comandos
inline void av(double n) {avanzaTortuga(n);}
inline void re(double n) {retrocedeTortuga(n);}
inline void gd(double n) {giraDerecha(n);}
inline void gi(double n) {giraIzquierda(n);}
inline void ot() {ocultaTortuga();}
inline void ponXY(double x, double y) { ponPos(x, y); }
inline void bl() { bajaLapiz(); }
inline void sl() { subeLapiz(); }
inline void poncl(const char* color) { ponColorLapiz(color); }

// Operaciones aritmeticas

// Caso base de Suma
inline int SUMA(int x) { return x; }

// Template recursivo para cualquier cantidad de argumentos
template<typename... Args>
inline int SUMA(int x, Args... args) {
    return x + SUMA(args...);
}

// Caso base de Resta
inline int DIFERENCIA(int x) { return x; }

// Template recursivo para Resta
template<typename... Args>
inline int DIFERENCIA(int x, Args... args) {
    return x - DIFERENCIA(args...);
}


int PRODUCTO(int a, int b);
int DIVISION(int a, int b);
int POTENCIA(int a, int b);
int AZAR(int n);


#endif //LOGOTEC_TURTLE_HW_H