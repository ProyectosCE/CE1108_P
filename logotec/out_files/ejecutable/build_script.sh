#!/bin/bash
set -e  # Detener en el primer error

echo "Starting build process..."
echo "Source: $1"
echo "Build: $2"
echo "Obj: $3"

SOURCE_DIR="$1"
BUILD_DIR="$2"
OBJ_DIR="$3"

# Limpiar build anterior
echo "Cleaning previous build..."
rm -f "$BUILD_DIR"/logotec_preview*
rm -f "$OBJ_DIR"/*.o
rm -f "$SOURCE_DIR"/ui_mainwindow.h
rm -f "$BUILD_DIR"/*.moc.cpp

# Generar archivos Qt
echo "Generating Qt files..."

# Generar ui_mainwindow.h
if [ -f "$SOURCE_DIR/ui/mainwindow.ui" ]; then
    uic "$SOURCE_DIR/ui/mainwindow.ui" -o "$SOURCE_DIR/ui_mainwindow.h" || echo "⚠️  uic failed"
fi

# Generar MOC files
moc "$SOURCE_DIR/ui/mainwindow.h" -o "$BUILD_DIR/mainwindow.moc.cpp" || echo "⚠️  moc mainwindow failed"
moc "$SOURCE_DIR/turtle/turtlescene.h" -o "$BUILD_DIR/turtlescene.moc.cpp" || echo "⚠️  moc turtlescene failed"
moc "$SOURCE_DIR/turtle/turtleview.h" -o "$BUILD_DIR/turtleview.moc.cpp" || echo "⚠️  moc turtleview failed"

# Obtener flags de Qt
QT_FLAGS=$(pkg-config --cflags --libs Qt5Widgets 2>/dev/null || echo "-I/usr/include/x86_64-linux-gnu/qt5 -I/usr/include/x86_64-linux-gnu/qt5/QtWidgets -I/usr/include/x86_64-linux-gnu/qt5/QtCore -I/usr/include/x86_64-linux-gnu/qt5/QtGui -I/usr/include/x86_64-linux-gnu/qt5/QtOpenGL -lQt5Widgets -lQt5Core -lQt5Gui -lQt5OpenGL")

# Compilar archivos objeto
echo "Compiling object files..."

compile_file() {
    local src="$1"
    local obj="$2"

    g++ -c -std=c++20 -fPIC -o "$obj" "$src" \
        -I"$SOURCE_DIR" -I"$SOURCE_DIR/ui" -I"$SOURCE_DIR/turtle" -I"$BUILD_DIR" \
        $QT_FLAGS \
        -fpermissive -Wno-deprecated-enum-enum-conversion -Wno-deprecated-declarations
}

# Lista de archivos fuente
compile_file "$SOURCE_DIR/main.cpp" "$OBJ_DIR/main.o"
compile_file "$SOURCE_DIR/ui/mainwindow.cpp" "$OBJ_DIR/mainwindow.o"
compile_file "$SOURCE_DIR/turtle/turtlescene.cpp" "$OBJ_DIR/turtlescene.o"
compile_file "$SOURCE_DIR/turtle/turtleview.cpp" "$OBJ_DIR/turtleview.o"
compile_file "$SOURCE_DIR/turtle_program.cpp" "$OBJ_DIR/turtle_program.o"
compile_file "$BUILD_DIR/mainwindow.moc.cpp" "$OBJ_DIR/mainwindow.moc.o"
compile_file "$BUILD_DIR/turtlescene.moc.cpp" "$OBJ_DIR/turtlescene.moc.o"
compile_file "$BUILD_DIR/turtleview.moc.cpp" "$OBJ_DIR/turtleview.moc.o"

# Linkear ejecutable ELF
echo "Linking ELF executable..."
g++ -o "$BUILD_DIR/logotec_preview.elf" \
    "$OBJ_DIR/main.o" \
    "$OBJ_DIR/mainwindow.o" \
    "$OBJ_DIR/turtlescene.o" \
    "$OBJ_DIR/turtleview.o" \
    "$OBJ_DIR/turtle_program.o" \
    "$OBJ_DIR/mainwindow.moc.o" \
    "$OBJ_DIR/turtlescene.moc.o" \
    "$OBJ_DIR/turtleview.moc.o" \
    $QT_FLAGS \
    -lstdc++ -fPIC -Wl,--gc-sections

# Crear archivo binario
echo "Generating binary file..."
if command -v objcopy &> /dev/null; then
    objcopy -O binary "$BUILD_DIR/logotec_preview.elf" "$BUILD_DIR/logotec_preview.bin"
    echo "Binary file created"
else
    echo "⚠️  objcopy not available, skipping binary generation"
fi

# Crear ejecutable normal
echo "Creating executable..."
cp "$BUILD_DIR/logotec_preview.elf" "$BUILD_DIR/logotec_preview"
chmod +x "$BUILD_DIR/logotec_preview"

# Limpiar archivos temporales
echo "Cleaning temporary files..."
rm -f "$SOURCE_DIR/ui_mainwindow.h"
rm -f "$BUILD_DIR"/*.moc.cpp

echo "Build completed successfully!"
echo "Generated files:"
echo "   • logotec_preview - Executable"
echo "   • logotec_preview.elf - ELF file"
if [ -f "$BUILD_DIR/logotec_preview.bin" ]; then
    echo "   • logotec_preview.bin - Binary file"
fi
echo "   • Object files in $OBJ_DIR/"

