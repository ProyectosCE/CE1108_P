#include <iostream>
#include <QApplication>
#include "ui/mainwindow.h"
#include <fstream>
#include <string>
#include "antlr4-runtime.h"
#include "CodeGen.h"
#include "gen/LogotecGramarLexer.h"
#include "gen/LogotecGramarParser.h"
#include <filesystem>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    return app.exec();

}
