/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GameWindow
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QWidget *gridWidget;
    QGridLayout *grid;
    QPushButton *pauseButton;
    QPushButton *startButton;
    QLCDNumber *scoreLcd;
    QLabel *nextPieceLabel;
    QLabel *label_2;

    void setupUi(QDialog *GameWindow)
    {
        if (GameWindow->objectName().isEmpty())
            GameWindow->setObjectName(QString::fromUtf8("GameWindow"));
        GameWindow->resize(800, 600);
        pushButton = new QPushButton(GameWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(650, 510, 120, 60));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  border: 3px solid #fff;\n"
"  font-size: 18px;\n"
"  text-align: center;\n"
"  border-radius: 15px;\n"
"}\n"
"QPushButton:hover { background-color: rgba(220, 220, 220, 0.5); }\n"
"QPushButton:pressed { background-color: rgba(220, 220, 220, 1); }"));
        label = new QLabel(GameWindow);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 600));
        gridWidget = new QWidget(GameWindow);
        gridWidget->setObjectName(QString::fromUtf8("gridWidget"));
        gridWidget->setGeometry(QRect(280, 50, 241, 411));
        gridWidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"  color: #fff;\n"
" font-size: 32px;\n"
"  text-align: center;\n"
"  border-radius: 15px;\n"
"  background-color: rgba(220, 220, 220, 0.5);\n"
"}\n"
""));
        grid = new QGridLayout(gridWidget);
        grid->setObjectName(QString::fromUtf8("grid"));
        pauseButton = new QPushButton(GameWindow);
        pauseButton->setObjectName(QString::fromUtf8("pauseButton"));
        pauseButton->setGeometry(QRect(345, 510, 110, 50));
        pauseButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  border: 3px solid #fff;\n"
"  font-size: 18px;\n"
"  text-align: center;\n"
"  border-radius: 15px;\n"
"}\n"
"QPushButton:hover { background-color: rgba(220, 220, 220, 0.5); }\n"
"QPushButton:pressed { background-color: rgba(220, 220, 220, 1); }"));
        startButton = new QPushButton(GameWindow);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(30, 510, 120, 60));
        startButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  border: 3px solid #fff;\n"
"  font-size: 18px;\n"
"  text-align: center;\n"
"  border-radius: 15px;\n"
"}\n"
"QPushButton:hover { background-color: rgba(220, 220, 220, 0.5); }\n"
"QPushButton:pressed { background-color: rgba(220, 220, 220, 1); }"));
        scoreLcd = new QLCDNumber(GameWindow);
        scoreLcd->setObjectName(QString::fromUtf8("scoreLcd"));
        scoreLcd->setGeometry(QRect(600, 80, 141, 81));
        scoreLcd->setStyleSheet(QString::fromUtf8("  border: 3px solid #fff;\n"
"  border-radius: 20px;\n"
""));
        nextPieceLabel = new QLabel(GameWindow);
        nextPieceLabel->setObjectName(QString::fromUtf8("nextPieceLabel"));
        nextPieceLabel->setGeometry(QRect(50, 80, 180, 250));
        nextPieceLabel->setStyleSheet(QString::fromUtf8("  border: 3px solid #fff;\n"
"  border-radius: 20px;\n"
"  background-color: rgba(220, 220, 220, 1);\n"
""));
        label_2 = new QLabel(GameWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(280, 50, 241, 411));
        label_2->setStyleSheet(QString::fromUtf8("  border: 3px solid #fff;\n"
"  border-radius: 20px;\n"
""));
        label->raise();
        pushButton->raise();
        gridWidget->raise();
        pauseButton->raise();
        startButton->raise();
        scoreLcd->raise();
        nextPieceLabel->raise();
        label_2->raise();

        retranslateUi(GameWindow);

        QMetaObject::connectSlotsByName(GameWindow);
    } // setupUi

    void retranslateUi(QDialog *GameWindow)
    {
        GameWindow->setWindowTitle(QCoreApplication::translate("GameWindow", "Tetis", nullptr));
        pushButton->setText(QCoreApplication::translate("GameWindow", "\320\234\320\265\320\275\321\216", nullptr));
        label->setText(QString());
        pauseButton->setText(QCoreApplication::translate("GameWindow", "\320\237\320\260\321\203\320\267\320\260", nullptr));
        startButton->setText(QCoreApplication::translate("GameWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        nextPieceLabel->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GameWindow: public Ui_GameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
