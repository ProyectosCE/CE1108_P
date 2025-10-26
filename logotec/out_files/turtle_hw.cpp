#include "turtle_hw.h"
#include <Servo.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>
// Pines
#define IN1 0  // Rueda izquierda
#define IN2 2

#define IN3 12  // Rueda derecha
#define IN4 15

#define rotate 13  // Girar

Servo Color_turrent;

Adafruit_MPU6050 mpu;

float anguloZ = 0.0;
float ultimoZ = 0.0;
unsigned long ultimoTiempo = 0;




void initTurtle() {
    pinMode(IN1, OUTPUT);
    pinMode(IN3, OUTPUT);

    pinMode(IN2, OUTPUT);
    pinMode(IN4, OUTPUT);

    pinMode(rotate, OUTPUT);


    Color_turrent.attach(rotate);
    Serial.begin(115200);
    Wire.begin(4, 5); // SDA, SCL

    if (!mpu.begin()) {
        Serial.println("No se detectó MPU6050!");
        while (1) delay(10);
    }

    mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
    mpu.setGyroRange(MPU6050_RANGE_500_DEG);
    mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

    delay(1000);
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);
    ultimoZ = g.gyro.z;
    ultimoTiempo = millis();

    Serial.println("MPU6050 listo y calibrado.");




}

void detenerMotores() {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW);
    esperar(2000);
}

void esperar(int n){
    delay(n);
}

float leerAnguloZ() {
    sensors_event_t a, g, temp;
    mpu.getEvent(&a, &g, &temp);

    unsigned long tiempoActual = millis();
    float dt = (tiempoActual - ultimoTiempo) / 1000.0; // segundos
    ultimoTiempo = tiempoActual;

    float velocidadZ = g.gyro.z * 57.2958; // rad/s → deg/s
    anguloZ += velocidadZ * dt;
    return anguloZ;
}

void resetAngulo() {
    anguloZ = 0.0;
    ultimoTiempo = millis();
}





void avanzaTortuga(double n) {
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
    esperar(n*1000);
    detenerMotores();



}




void retrocedeTortuga(double n) {
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
    esperar(n*1000);
    detenerMotores();


}

void giraDerecha(double grados) {
    resetAngulo();
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);

    while (fabs(leerAnguloZ()) < grados) {
        delay(10);
    }
    detenerMotores();
}

void giraIzquierda(double grados) {
    resetAngulo();
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);

    while (fabs(leerAnguloZ()) < grados) {
        delay(10);
    }
    detenerMotores();
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

}

void subeLapiz() {

}

void ponColorLapiz(const char* color) {
        Color_turrent.write(90);
        esperar(1000);
        Color_turrent.write(0);
        esperar(1000);


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
