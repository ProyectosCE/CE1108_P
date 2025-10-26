# Conexión del ESP8266 con el Driver y Acelerómetro

Este documento describe cómo conectar el **ESP8266 (NodeMCU)** al **driver de motores** y al **acelerómetro** para el correcto funcionamiento del proyecto.

---

## 🔌 Conexiones

### 🔹 Driver de motores

| Señal | Descripción | GPIO | Pin (NodeMCU) |
|-------|--------------|:----:|:--------------:|
| IN1   | Control motor 1 (dirección A) | 0 | D3 |
| IN2   | Control motor 1 (dirección B) | 2 | D4 |
| IN3   | Control motor 2 (dirección A) | 12 | D6 |
| IN4   | Control motor 2 (dirección B) | 15 | D8 |

### 🔹 Servo (rotación de lápices)

| Señal | GPIO | Pin (NodeMCU) |
|--------|:----:|:-------------:|
| Rotate | 13 | D7 |

### 🔹 Acelerómetro (I²C)

| Señal | GPIO | Pin (NodeMCU) |
|--------|:----:|:-------------:|
| SDA | 4 | D2 |
| SCL | 5 | D1 |

---


