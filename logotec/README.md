# Listado Completo de Instrucciones LogoTec y su Generación en C++

## 📋 Instrucciones Básicas de Variables

| Instrucción LogoTec | Sintaxis        | Código C++ Generado | Descripción |
|---------------------|-----------------|---------------------|-------------|
| **Haz** | `Haz id expr`   | `tipo id = valor;` | Declaración y asignación de variable |
| **INIC** | `INIC id = expr` | `id = valor;` | Reasignación de variable existente |
| **INC** | `INC [id expr]` | `id++;` o `id = id + expr;` | Incremento de variable |

## 🐢 Instrucciones de Movimiento de Tortuga

| Instrucción LogoTec    | Sintaxis | Código C++ Generado | Descripción |
|------------------------|----------|---------------------|-------------|
| **avanza/av**          | `avanza expr` | `avanzaTortuga(valor);` | Avanza tortuga N pasos |
| **retrocede/re**       | `retrocede expr` | `retrocedeTortuga(valor);` | Retrocede tortuga N pasos |
| **GiraDerecha/GD**     | `GiraDerecha expr` | `giraDerecha(valor);` | Gira derecha N grados |
| **GiraIzquierda/GI**  | `GiraIzquierda expr` | `giraIzquierda(valor);` | Gira izquierda N grados |
| **OcultarTortuga/OT** | `OcultarTortuga` | `ocultaTortuga();` | Oculta la tortuga |

## 📍 Instrucciones de Posición

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción                   |
|---------------------|----------|---------------------|-------------------------------|
| **ponpos**          | `ponpos [expr expr]` | `ponPos(x, y);` | Posiciona en coordenadas X, Y |
| **ponxy**           | `ponxy expr expr` | `ponXY(x, y);` | Posiciona en coordenadas X, Y       |
| **ponx**            | `ponx expr` | `ponX(x);` | Establece coordenada X        |
| **pony**            | `pony expr` | `ponY(y);` | Establece coordenada Y        |
| **ponrumbo**        | `ponrumbo expr` | `ponRumbo(grados);` | Establece rumbo               |
| **centro**          | `centro` | `centro();` | Centra la tortuga             |

## ✏️ Instrucciones de Dibujo

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción |
|---------------------|----------|---------------------|-------------|
| **bajalapiz/BL** | `bajalapiz` | `bajaLapiz();` | Activa dibujo al mover |
| **subelapiz/SL** | `subelapiz` | `subeLapiz();` | Desactiva dibujo al mover |
| **poncolorlapiz/poncl** | `poncolorlapiz color` | `ponColorLapiz(color);` | Cambia color del lápiz |

## ⏱️ Instrucciones de Control de Tiempo

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción                      |
|---------------------|----------|---------------------|----------------------------------|
| **espera** | `espera expr` | `esperar(tiempo);` | Pausa ejecución en n/60 segundos |

## 🔄 Estructuras de Control

| Instrucción LogoTec | Sintaxis                              | Código C++ Generado | Descripción |
|---------------------|---------------------------------------|---------------------|-------------|
| **SI**              | `SI (cond) [instrucciones]`           | `if (cond) { ... }` | Condicional simple |
| **SI**              | `SI (cond) [si] [sino]`               | `if (cond) { ... } else { ... }` | Condicional con else |
| **REPITE**          | `REPITE n [instrucciones]`            | `for(int _i=0; _i<n; _i++) { ... }` | Bucle contado |
| **EJECUTA**         | `EJECUTA [instrucciones]`             | `do { ... }` | Ejecuta bloque una vez |
| **HAZ.HASTA**       | `HAZ.HASTA [instrucciones] (cond)`    | `do { ... } while (!(cond));` | Bucle do-while inverso |
| **HASTA**           | `HASTA (cond) [instrucciones]`        | `while (!(cond)) { ... }` | Bucle while inverso |
| **HAZ.MIENTRAS**    | `HAZ.MIENTRAS [instrucciones] (cond)` | `do { ... } while (cond);` | Bucle do-while |
| **MIENTRAS**        | `MIENTRAS (cond) [instrucciones]`     | `while (cond) { ... }` | Bucle while |

## 🔧 Operadores Lógicos y Comparación

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción |
|---------------------|----------|---------------------|-------------|
| **Iguales?** | `Iguales? expr expr` | `expr1 == expr2` | Comparación de igualdad |
| **Y** | `Y expr expr` | `expr1 && expr2` | AND lógico |
| **O** | `O expr expr` | `expr1 \|\| expr2` | OR lógico |
| **MayorQue?** | `MayorQue? expr expr` | `expr1 > expr2` | Mayor que |
| **MenorQue?** | `MenorQue? expr expr` | `expr1 < expr2` | Menor que |

## 🧮 Expresiones Matemáticas

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción |
|---------------------|----------|---------------------|-------------|
| **Suma** | `Suma expr expr+` | `SUMA(a, b, c)` | Suma múltiple |
| **Diferencia** | `Diferencia expr expr+` | `DIFERENCIA(a, b, c)` | Diferencia múltiple |
| **Producto** | `Producto expr expr+` | `PRODUCTO(a, b, c)` | Producto múltiple |
| **Division** | `Division expr expr` | `DIVISION(a, b)` | División |
| **Potencia** | `Potencia expr expr` | `POTENCIA(a, b)` | Potenciación |
| **Azar** | `Azar expr` | `AZAR(max)` | Número aleatorio |

## 📝 Entrada/Salida

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción |
|---------------------|----------|---------------------|-------------|
| **MUESTRA** | `MUESTRA expr` | `std::cout << valor << std::endl;` | Salida a consola |
| **RUMBO** | `RUMBO` | `getRumbo()` | Obtiene rumbo actual |

## 🏗️ Procedimientos/Funciones

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción |
|---------------------|----------|---------------------|-------------|
| **Para** | `Para id [params] ... FIN` | `tipo id(params) { ... }` | Define función |
| **LLAMADA** | `id [args]` | `id(arg1, arg2);` | Llama función |

## 🎨 Colores Predefinidos

| Color LogoTec | C++ Generado |
|---------------|--------------|
| `azul`        | `azul`       |
| `negro`       | `negro`      |
| `rojo`        | `rojo`       |

## 📝 Comentarios

| Instrucción LogoTec | Sintaxis | Código C++ Generado | Descripción |
|---------------------|----------|---------------------|-------------|
| **COMENTARIO** | `// texto` | `// texto` | Comentario de línea |

## 🔤 Tipos de Datos y Valores

| Tipo LogoTec | Ejemplo | C++ Generado |
|-------------|---------|--------------|
| `NUMBER` | `123`, `45` | `123`, `45` |
| `CADENA_TEXTO` | `"Hola"` | `"Hola"` |
| `TRUE/FALSE` | `True`, `False` | `true`, `false` |
| `ID` | `miVariable` | `miVariable` |

## 🎯 Operadores Aritméticos

| Operador LogoTec | C++ Generado |
|------------------|--------------|
| `+` | `+` |
| `-` | `-` |
| `*` | `*` |
| `/` | `/` |

## 🔍 Operadores de Comparación

| Operador LogoTec | C++ Generado |
|------------------|--------------|
| `&&` | `&&` |
| `\|\|` | `\|\|` |
| `!` | `!` |
| `>` | `>` |
| `<` | `<` |
| `>=` | `>=` |
| `<=` | `<=` |
| `==` | `==` |
| `!=` | `!=` |

Este listado representa todas las instrucciones definidas en la gramática de LogoTec y su correspondiente generación en C++ según el código proporcionado.