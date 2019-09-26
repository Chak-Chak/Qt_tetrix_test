/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *exit;
    QPushButton *play;
    QLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 607);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        exit = new QPushButton(centralwidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(340, 300, 120, 60));
        exit->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  display: inline-block;\n"
"  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  border: 3px solid #fff;\n"
"  font-size: 18px;\n"
"  text-align: center;\n"
"  outline: none;\n"
"  text-decoration: none;\n"
"  border-radius: 15px;\n"
"  transition: 0.2s;\n"
"}\n"
"QPushButton:hover { background-color: rgba(220, 220, 220, 0.5); }\n"
"/*QPushButton:after { background-color: rgba(220, 220, 220, 1); }*/"));
        play = new QPushButton(centralwidget);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(330, 100, 140, 70));
        play->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  display: inline-block;\n"
"  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  border: 3px solid #fff;\n"
"  font-size: 18px;\n"
"  text-align: center;\n"
"  outline: none;\n"
"  text-decoration: none;\n"
"  border-radius: 15px;\n"
"  transition: 0.2s;\n"
"}\n"
"QPushButton:hover { background-color: rgba(220, 220, 220, 0.5); }\n"
"/*QPushButton:after { background-color: rgba(220, 220, 220, 1); }*/"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        MainWindow->setCentralWidget(centralwidget);
        label->raise();
        play->raise();
        exit->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 793, 21));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Menu", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        play->setText(QCoreApplication::translate("MainWindow", "\320\230\320\263\321\200\320\260", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
