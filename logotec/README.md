Aquí tienes un README completo y organizado con tus instrucciones, listo para usar en tu proyecto:

---

# Guía de Configuración y Uso de ESP con Arduino CLI y esptool

## 1. Instalar esptool

```bash
python3 -m pip install --user esptool
```

---

## 2. Descargar Arduino CLI

```bash
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
```

> **Nota:** El script instala Arduino CLI en tu carpeta local (`~/bin` o similar).
> Asegúrate de agregar la ruta al **PATH** para poder usar `arduino-cli` desde cualquier terminal:

```bash
export PATH="$HOME/bin:$PATH"
```

Si quieres que este cambio sea permanente, añade la línea anterior a tu archivo `~/.bashrc` o `~/.zshrc` y luego recarga el shell:

```bash
source ~/.bashrc
```

---

## 3. Configurar Arduino CLI

```bash
arduino-cli config init
```

Luego, modifica el archivo `~/.arduino15/arduino-cli.yaml` agregando las URLs de los boards ESP:

```yaml
board_manager:
    additional_urls:
      - http://arduino.esp8266.com/stable/package_esp8266com_index.json
      - https://dl.espressif.com/dl/package_esp32_index.json
```

---

## 4. Descargar librerías de ESP

```bash
arduino-cli core update-index
arduino-cli core install esp8266:esp8266
arduino-cli core install esp32:esp32
```

---

## 5. Configurar conexión serial

* Deshabilitar `brltty` (si está activo):

```bash
sudo mv /usr/sbin/brltty /usr/sbin/brltty.disabled
```

* Verificar dispositivos conectados:

```bash
ls /dev/ttyUSB*
```

* Verificar placa:

```bash
arduino-cli board list
```

Sí, se puede mejorar visualmente usando **bloques de advertencia** o **tipos de nota** en Markdown, dependiendo del renderizador que uses. Por ejemplo, GitHub no tiene “cuadros amarillos” por defecto, pero se pueden usar emojis o bloques de resaltado con `>` para diferenciar. Aquí te muestro una forma más clara:

---

## 6. Compilar el proyecto

En la carpeta del proyecto:

* Para **ESP8266**:

```bash
arduino-cli compile \
  --fqbn esp8266:esp8266:nodemcuv2 \
  --build-path ./build \
  .
```

* Para **ESP32**:

```bash
arduino-cli compile \
  --fqbn esp32:esp32:esp32dev \
  .
```

> ⚠️ **Nota:** A partir de aquí (paso 6 y 7) el IDE hace esto automáticamente. Esto es útil para compilación manual.

---

## 7. Subir el archivo a la placa

* Con Arduino CLI:

```bash
arduino-cli upload -p /dev/ttyUSB0 --fqbn esp8266:esp8266:nodemcuv2 .
```

* Con esptool.py:

```bash
esptool.py --port /dev/ttyUSB0 write_flash 0x00000 ./build/test_espv2.ino.bin
```

---

### ⚠️ Notas importantes

* Asegúrate de que la placa esté conectada y que el puerto `/dev/ttyUSB0` exista.
* Para ESP32, reemplaza `esp8266:esp8266:nodemcuv2` por `esp32:esp32:esp32dev`.
* Deshabilitar `brltty` evita conflictos con el puerto serial en Linux.

---


## 8. Librerias Extra para el hardware

* Con Arduino CLI:

```bash
arduino-cli lib install "Adafruit MPU6050"
arduino-cli lib install "Adafruit Unified Sensor"
arduino-cli lib install "Adafruit BusIO"
```

## 9. Para debuggiar

* Con Arduino CLI:
*Para ver el serial 
```bash
arduino-cli monitor -p /dev/ttyUSB0 -b esp8266:esp8266:nodemcuv2 --config 115200


```



---


