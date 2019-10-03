#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>
#include <QMovie>
#include <QLabel>
#include <QWidget>

#include "tetris_board.h"
#include "gameoverwindow.h"


QT_BEGIN_NAMESPACE
class QLCDNumber;
class QLabel;
class QPushButton;
QT_END_NAMESPACE
class tetris_game;

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();
    QMovie *movie, *movie_2;


signals:
    void main_window();
    void sendData(QString str);

private slots:
    void on_pushButton_clicked();

    void tetris_gameOver_info();

    void onButtonSend();

    void on_pauseButton_clicked();

private:

    Ui::GameWindow *ui;
    QLabel *createLabel(const QString &text);
    tetris_board *board; //Игровое поле
    QLabel *gridFrame; //Рамка для GridLayout
    QLabel *nextPieceLabel;
    QPushButton *pauseButton; //Кнопка паузы
    QPushButton *startButton; //Кнопка старта
    bool gameIsStarted;
    QLCDNumber *scoreLcd;
    GameOverWindow *game_over_window;

};

#endif // GAMEWINDOW_H
