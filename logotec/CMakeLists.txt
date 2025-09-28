cmake_minimum_required(VERSION 3.28)
project(logotec)

set(CMAKE_CXX_STANDARD 20)
include(FetchContent)


# NO más include_directories ni link_directories
# include_directories(/usr/local/include/antlr4-runtime)
# link_directories(/usr/local/lib)


FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.12.0/json.tar.xz)
FetchContent_MakeAvailable(json)


# ------------------------
# ANTLR4 C++ runtime
# ------------------------
FetchContent_Declare(
        antlr4
        URL https://www.antlr.org/download/antlr4-cpp-runtime-4.13.2-source.zip
)

# Variables para evitar instalar o compilar tests
set(ANTLR4_INSTALL OFF CACHE BOOL "" FORCE)
set(ANTLR_BUILD_CPP_TESTS OFF CACHE BOOL "" FORCE)

# Descargar y hacer disponible
FetchContent_MakeAvailable(antlr4)


set(ANTLR_GENERATED_FILES
        src/SimpleParser.cpp
        src/SimpleBaseListener.cpp
        src/SimpleParser.h
        src/SimpleBaseListener.h
        src/SimpleBaseVisitor.cpp
        src/SimpleBaseVisitor.h
        src/SimpleLexer.cpp
        src/SimpleLexer.h
        src/SimpleLexer.interp
        src/SimpleLexer.tokens
        src/SimpleListener.cpp
        src/SimpleListener.h
        src/SimpleVisitor.cpp
        src/SimpleVisitor.h
        src/Simple.tokens
        src/Simple.interp
)

add_executable(logotec
        src/main.cpp
)

#target_link_libraries(cppInterprete PRIVATE antlr4-runtime)
# Enlazar librerías
target_link_libraries(logotec
        PRIVATE
        antlr4_static   # o antlr4_shared si prefieres dinámico
        nlohmann_json::nlohmann_json
)