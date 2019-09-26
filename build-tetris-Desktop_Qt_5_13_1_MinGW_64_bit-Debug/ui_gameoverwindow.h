/********************************************************************************
** Form generated from reading UI file 'gameoverwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVERWINDOW_H
#define UI_GAMEOVERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOverWindow
{
public:
    QLabel *background;
    QPushButton *againButton;
    QPushButton *menuButton;
    QLabel *GOscore;
    QLabel *label_3;
    QLabel *GameOverLabel;
    QPushButton *pushButton;

    void setupUi(QDialog *GameOverWindow)
    {
        if (GameOverWindow->objectName().isEmpty())
            GameOverWindow->setObjectName(QString::fromUtf8("GameOverWindow"));
        GameOverWindow->resize(400, 300);
        background = new QLabel(GameOverWindow);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 400, 300));
        background->setStyleSheet(QString::fromUtf8("  background-color: grey;"));
        againButton = new QPushButton(GameOverWindow);
        againButton->setObjectName(QString::fromUtf8("againButton"));
        againButton->setGeometry(QRect(50, 220, 120, 50));
        againButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        menuButton = new QPushButton(GameOverWindow);
        menuButton->setObjectName(QString::fromUtf8("menuButton"));
        menuButton->setGeometry(QRect(230, 220, 120, 50));
        menuButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        GOscore = new QLabel(GameOverWindow);
        GOscore->setObjectName(QString::fromUtf8("GOscore"));
        GOscore->setGeometry(QRect(0, 100, 130, 70));
        GOscore->setStyleSheet(QString::fromUtf8("  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  font-size: 38px;"));
        label_3 = new QLabel(GameOverWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(140, 90, 251, 91));
        GameOverLabel = new QLabel(GameOverWindow);
        GameOverLabel->setObjectName(QString::fromUtf8("GameOverLabel"));
        GameOverLabel->setGeometry(QRect(80, 20, 220, 55));
        GameOverLabel->setStyleSheet(QString::fromUtf8("  width: 200px;\n"
"  padding: 8px;\n"
"  color: #fff;\n"
"  font-size: 38px;"));
        pushButton = new QPushButton(GameOverWindow);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(270, 170, 101, 51));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton:pressed { \n"
"margin-right: Length;\n"
"margin-left: Length;\n"
"}\n"
""));

        retranslateUi(GameOverWindow);

        QMetaObject::connectSlotsByName(GameOverWindow);
    } // setupUi

    void retranslateUi(QDialog *GameOverWindow)
    {
        GameOverWindow->setWindowTitle(QCoreApplication::translate("GameOverWindow", "Dialog", nullptr));
        background->setText(QString());
        againButton->setText(QCoreApplication::translate("GameOverWindow", "\320\225\321\211\320\265 \321\200\320\260\320\267", nullptr));
        menuButton->setText(QCoreApplication::translate("GameOverWindow", "\320\234\320\265\320\275\321\216", nullptr));
        GOscore->setText(QCoreApplication::translate("GameOverWindow", "Score:", nullptr));
        label_3->setText(QString());
        GameOverLabel->setText(QCoreApplication::translate("GameOverWindow", "Game Over", nullptr));
        pushButton->setText(QCoreApplication::translate("GameOverWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GameOverWindow: public Ui_GameOverWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVERWINDOW_H
