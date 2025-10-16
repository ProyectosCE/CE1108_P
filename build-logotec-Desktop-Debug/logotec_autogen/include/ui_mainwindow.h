/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New_File;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionParser_Tree;
    QAction *actionShow_Grid;
    QWidget *centralwidget;
    QWidget *codigo;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QCommandLinkButton *CompileButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *terminal;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_start;
    QPushButton *btn_reset;
    QPushButton *btn_pause;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuTurtle;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->setEnabled(true);
        MainWindow->resize(1000, 800);
        MainWindow->setMinimumSize(QSize(1000, 800));
        MainWindow->setMaximumSize(QSize(1000, 800));
        MainWindow->setIconSize(QSize(24, 24));
        action_New_File = new QAction(MainWindow);
        action_New_File->setObjectName(QString::fromUtf8("action_New_File"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        actionParser_Tree = new QAction(MainWindow);
        actionParser_Tree->setObjectName(QString::fromUtf8("actionParser_Tree"));
        actionShow_Grid = new QAction(MainWindow);
        actionShow_Grid->setObjectName(QString::fromUtf8("actionShow_Grid"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMinimumSize(QSize(800, 578));
        centralwidget->setMaximumSize(QSize(100000, 100000));
        codigo = new QWidget(centralwidget);
        codigo->setObjectName(QString::fromUtf8("codigo"));
        codigo->setGeometry(QRect(20, 70, 361, 501));
        codigo->setMaximumSize(QSize(361, 501));
        horizontalLayoutWidget = new QWidget(codigo);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 351, 491));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        horizontalLayout->addWidget(plainTextEdit);

        CompileButton = new QCommandLinkButton(centralwidget);
        CompileButton->setObjectName(QString::fromUtf8("CompileButton"));
        CompileButton->setGeometry(QRect(300, 30, 81, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(399, 69, 561, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(29, 579, 931, 181));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        terminal = new QPlainTextEdit(horizontalLayoutWidget_2);
        terminal->setObjectName(QString::fromUtf8("terminal"));
        terminal->setLineWrapMode(QPlainTextEdit::NoWrap);
        terminal->setReadOnly(true);

        horizontalLayout_2->addWidget(terminal);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(700, 30, 263, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        btn_start = new QPushButton(horizontalLayoutWidget_3);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));

        horizontalLayout_3->addWidget(btn_start);

        btn_reset = new QPushButton(horizontalLayoutWidget_3);
        btn_reset->setObjectName(QString::fromUtf8("btn_reset"));

        horizontalLayout_3->addWidget(btn_reset);

        btn_pause = new QPushButton(horizontalLayoutWidget_3);
        btn_pause->setObjectName(QString::fromUtf8("btn_pause"));

        horizontalLayout_3->addWidget(btn_pause);

        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1000, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTurtle = new QMenu(menuBar);
        menuTurtle->setObjectName(QString::fromUtf8("menuTurtle"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTurtle->menuAction());
        menuFile->addAction(action_New_File);
        menuFile->addAction(action_Open);
        menuFile->addAction(action_Save);
        menuView->addAction(actionParser_Tree);
        menuTurtle->addAction(actionShow_Grid);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action_New_File->setText(QCoreApplication::translate("MainWindow", "New File", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
        action_Save->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionParser_Tree->setText(QCoreApplication::translate("MainWindow", "Parser Tree", nullptr));
        actionShow_Grid->setText(QCoreApplication::translate("MainWindow", "Show Grid", nullptr));
        CompileButton->setText(QCoreApplication::translate("MainWindow", "Compile", nullptr));
        btn_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        btn_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        btn_pause->setText(QCoreApplication::translate("MainWindow", "Pause", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuTurtle->setTitle(QCoreApplication::translate("MainWindow", "Turtle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
