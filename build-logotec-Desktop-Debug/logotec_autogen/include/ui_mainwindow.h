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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_New_File;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionParser_Tree;
    QWidget *centralwidget;
    QWidget *widget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QWidget *widget_2;
    QGraphicsView *graphicsView;
    QLabel *label;
    QCommandLinkButton *CompileButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setIconSize(QSize(24, 24));
        action_New_File = new QAction(MainWindow);
        action_New_File->setObjectName(QString::fromUtf8("action_New_File"));
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Save = new QAction(MainWindow);
        action_Save->setObjectName(QString::fromUtf8("action_Save"));
        actionParser_Tree = new QAction(MainWindow);
        actionParser_Tree->setObjectName(QString::fromUtf8("actionParser_Tree"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setMaximumSize(QSize(100000, 100000));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 70, 361, 501));
        widget->setMaximumSize(QSize(361, 501));
        horizontalLayoutWidget = new QWidget(widget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 351, 491));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(horizontalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        horizontalLayout->addWidget(plainTextEdit);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(380, 70, 400, 491));
        widget_2->setMaximumSize(QSize(400, 491));
        graphicsView = new QGraphicsView(widget_2);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(20, 0, 411, 491));
        graphicsView->setFrameShadow(QFrame::Raised);
        QBrush brush(QColor(237, 51, 59, 255));
        brush.setStyle(Qt::Dense2Pattern);
        graphicsView->setBackgroundBrush(brush);
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 210, 151, 31));
        CompileButton = new QCommandLinkButton(centralwidget);
        CompileButton->setObjectName(QString::fromUtf8("CompileButton"));
        CompileButton->setGeometry(QRect(690, 10, 81, 41));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuFile->addAction(action_New_File);
        menuFile->addAction(action_Open);
        menuFile->addAction(action_Save);
        menuView->addAction(actionParser_Tree);

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
        label->setText(QCoreApplication::translate("MainWindow", "Comming soon....", nullptr));
        CompileButton->setText(QCoreApplication::translate("MainWindow", "Compile", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
