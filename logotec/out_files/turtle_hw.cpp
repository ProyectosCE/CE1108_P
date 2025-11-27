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


#define PWM_IZQ 165   // velocidad base de la rueda izquierda (IN1/IN2)
#define PWM_DER 240   // velocidad base de la rueda derecha (IN3/IN4) — un poco más


Servo servoMotor;

Adafruit_MPU6050 mpu;

float anguloZ = 0.0;
float ultimoZ = 0.0;
unsigned long ultimoTiempo = 0;


float offsetZ = 0;

void calibrarGyro() {
    Serial.println("Calibrando giroscopio...");
    float suma = 0;
    const int n = 500; // ~0.5s

    for (int i = 0; i < n; i++) {
        sensors_event_t a, g, temp;
        mpu.getEvent(&a, &g, &temp);
        suma += g.gyro.z;
        delay(1);
    }

    offsetZ = suma / n;
    Serial.print("Offset Z = ");
    Serial.println(offsetZ, 6);
}

void initTurtle() {
    pinMode(IN1, OUTPUT);
    pinMode(IN3, OUTPUT);

    pinMode(IN2, OUTPUT);
    pinMode(IN4, OUTPUT);

    pinMode(rotate, OUTPUT);


    servoMotor.attach(rotate);
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
    calibrarGyro();




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

    static float anteriorVel = 0;
    float velocidadZ = g.gyro.z * 57.2958;
    velocidadZ = (g.gyro.z - offsetZ) * 57.2958;
    anteriorVel = velocidadZ;

    unsigned long tiempoActual = millis();
    float dt = (tiempoActual - ultimoTiempo) / 1000.0;
    ultimoTiempo = tiempoActual;

    anguloZ += velocidadZ * dt;
    return anguloZ;
}

void resetAngulo() {
    anguloZ = 0.0;
    ultimoTiempo = millis();
}





void avanzaTortuga(double segundos) {
    resetAngulo();
    unsigned long t0 = millis();

    const float Kp = 9.0;
    const int baseL = PWM_IZQ;
    const int baseR = PWM_DER;

    while (millis() - t0 < segundos * 1000) {

        float ang = leerAnguloZ();
        float error = -ang; // queremos mantener 0 grados

        // control proporcional
        int correccion = Kp * error;

        int velL = constrain(baseL + correccion, 0, 255);
        int velR = constrain(baseR - correccion, 0, 255);

        // avanzar corrigiendo
        analogWrite(IN2, velL);
        analogWrite(IN3, velR);


    }

    detenerMotores();
}




void retrocedeTortuga(double segundos) {
    resetAngulo();
    unsigned long t0 = millis();

    const float Kp = 5.0;
    const int baseL = PWM_IZQ;  // base de la izquierda
    const int baseR = PWM_DER;  // base de la derecha

    while (millis() - t0 < segundos * 1000) {

        float ang = leerAnguloZ();
        float error = -ang;  // queremos mantener el rumbo en 0°

        // corrección proporcional
        int correccion = Kp * error;

        // Al retroceder, las ruedas giran al revés:
        // izquierda = IN1
        // derecha   = IN4

        int velL = constrain(baseL - correccion, 0, 255);
        int velR = constrain(baseR + correccion, 0, 255);

        // mover hacia atrás con corrección
        analogWrite(IN1, velL);  // izquierda atrás
        analogWrite(IN2, 0);
        analogWrite(IN3, 0);
        analogWrite(IN4, velR);  // derecha atrás

        delay(1);
    }

    detenerMotores();
}



void giraDerecha(double grados) {
    resetAngulo();

    const float margen = 2.0;   // grados de tolerancia
    const int v_min = 140;      // velocidad mínima efectiva
    const int v_max = 255;      // velocidad máxima
    const float Kp = 3.0;       // ganancia proporcional

    while (true) {
        float ang = leerAnguloZ();
        float error = grados - ang;

        if (error <= margen) break; // ya estamos suficientemente cerca

        int velocidad = (int)(Kp * error);
        velocidad = constrain(velocidad, v_min, v_max);

        analogWrite(IN1, 0);
        analogWrite(IN2, velocidad);
        analogWrite(IN3, 0);
        analogWrite(IN4, velocidad);

        delay(1);
    }

    detenerMotores();

}

void giraIzquierda(double grados) {
    resetAngulo();

    const float margen = 2.0;
    const int v_min = 140;
    const int v_max = 255;
    const float Kp = 3.0;

    while (true) {
        float ang = leerAnguloZ();
        float error = -grados - ang;

        if (error >= -margen) break;

        int velocidad = (int)(-Kp * error);
        velocidad = constrain(velocidad, v_min, v_max);

        analogWrite(IN1, velocidad);
        analogWrite(IN2, 0);
        analogWrite(IN3, velocidad);
        analogWrite(IN4, 0);

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

    servoMotor.write(60);
    delay(800);

}

void subeLapiz() {

    servoMotor.write(20);
    delay(800);

}

void ponColorLapiz(const char* color)
{
    if (color == "azul")
    {
        servoMotor.write(60);
        delay(800);

    }
    if (color == "negro")
    {

        servoMotor.write(80);
        delay(800);

    }
    if (color == "rojo")
    {

        servoMotor.write(100);
        delay(800);

    }


}

void centro() {

}

// Operaciones aritmeticas

int PRODUCTO(std::initializer_list<int> args) {
    int result = 1;
    for (int value : args) {
        result *= value;
    }
    return result;
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
