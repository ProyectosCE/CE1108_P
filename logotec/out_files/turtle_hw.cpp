#include "turtle_hw.h"

// Pines
#define R_wheel 0  // Rueda izquierda
#define L_wheel 2  // Rueda derecha
#define rotate 16  // Girar
#define color_change 5  // Cambio color
#define pen 4  // subelapiz

void initTurtle() {
    pinMode(R_wheel, OUTPUT);
    pinMode(L_wheel, OUTPUT);
    pinMode(rotate, OUTPUT);
    pinMode(color_change, OUTPUT);
    pinMode(pen, OUTPUT);
}

void esperar(int n){
    delay(n);
}

void avanzaTortuga(double n) {
    digitalWrite(R_wheel, HIGH);
    digitalWrite(L_wheel, HIGH);
}

void retrocedeTortuga(double n) {
    digitalWrite(R_wheel, HIGH);
    digitalWrite(L_wheel, HIGH);
}

void giraDerecha(double n) {
    digitalWrite(rotate, HIGH);
}

void giraIzquierda(double n) {
    digitalWrite(rotate, HIGH);
}

void ocultaTortuga() {

}

void ponPos() {

}

void ponRumbo(double n) {
    digitalWrite(rotate, HIGH);
}

void ponX(double x) {

}

void ponY(double y) {

}

void bajaLapiz() {
    digitalWrite(pen, HIGH);
}

void subeLapiz() {
    digitalWrite(pen, LOW);
}

void ponColorLapiz(const char* color) {
    digitalWrite(color_change, HIGH);
    esperar(2000);
    digitalWrite(color_change, LOW);
    esperar(2000);
}

void centro() {

}

// Operaciones aritmeticas

int PRODUCTO(int a, int b) {
    return a * b;
}

int DIVISION(int a, int b) {
    if (b == 0) {
        // Evita división por cero
        return 0;
    }
    return a / b;  // División entera
}

int POTENCIA(int a, int b) {
    int result = 1;
    for (int i = 0; i < b; i++) {
        result *= a;
    }
    return result;
}

int AZAR(int n) {
    return rand() % (n + 1);
}
