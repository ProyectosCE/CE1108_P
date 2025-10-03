#include <iostream>
#include <string>
using namespace std;

int main() {
int x = 5;
int y = 10;
string saludo = "Hola";
bool bandera = true;
x = 10;
saludo = "Mundo";
bandera = false;
// INIC x = "fa"  // Esto lanza error semántico
x++; // Esto incrementa x en 1
y += x; // Esto incrementa y en x
//TODO Implementar avanza
avanzaTortuga(5);
//TODO Implementar avanza
avanzaTortuga(10 * 2); //avanza 20 casillas
//TODO Implementar avanza
avanzaTortuga(2); //avanza 2 casillas
//TODO Implementar avanza
avanzaTortuga(9 / 3);
//TODO
retrocedeTortuga(5);
//TODO
retrocedeTortuga(10 * 2); //retrocede 20 casillas
//TODO
retrocedeTortuga(2); //retrocede 2 casillas
//TODO
retrocedeTortuga(9 / 3);
//TODO
giraDerecha(90);
//TODO
giraDerecha(45);
//TODO
giraIzquierda(90);
giraIzquierda(80);
//TODO
ocultaTortuga();
//TODO
ocultaTortuga();
//TODO
ponPos(10,20);
ponXY(15,40);
//TODO
ponRumbo(45);
//TODO
ponX(12);
//TODO
ponY(15);
//TODO
bajaLapiz();
bajaLapiz();
//TODO
subeLapiz();
//TODO
ponColorLapiz(azul);
ponColorLapiz(negro);
//TODO
centro();
espera(20);
//TODO
return 0;
}
