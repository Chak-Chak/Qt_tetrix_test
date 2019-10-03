#include "gameoverwindow.h"
#include "ui_gameoverwindow.h"
#include "mainwindow.h"
#include "gamewindow.h"
#include "tetris_board.h"
#include <QDebug>
#include <QDir>
#include <QGraphicsDropShadowEffect>

GameOverWindow::GameOverWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOverWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->setWindowFlags(Qt::CustomizeWindowHint);

    //QString pathToGIF = QDir::currentPath()+QString("qrc:resourse/images/squidward.gif");
    go_movie = new QMovie(":/images/resourse/images/squidward.gif");
    ui->background->setMovie(go_movie);
    ui->background->show();
    go_movie->start();

    //QString pathToGIF_2 = QDir::currentPath()+QString("qrc:resourse/images/rainbow_menu.gif");
    go2_movie = new QMovie(":/images/resourse/images/rainbow_menu.gif");
    ui->background_2->setMovie(go2_movie);
    ui->background_2->resize(800, 600);
    ui->background_2->show();
    go2_movie->start();

    //QString pathToGIF_3 = QDir::currentPath()+QString("qrc:resourse/images/game_over.gif");
    go3_movie = new QMovie(":/images/resourse/images/game_over.gif");
    ui->game_over_media->setMovie(go3_movie);
    ui->game_over_media->show();
    go3_movie->start();

    ui->background_2->setFocus();


    QGraphicsDropShadowEffect* effect = new QGraphicsDropShadowEffect(this);
    effect->setOffset(-1, -1);
    effect->setColor(Qt::black);
    ui->scoreLabel->setGraphicsEffect(effect);
    ui->GOscore->setGraphicsEffect(effect);

}


GameOverWindow::~GameOverWindow()
{
    delete ui;
}

void GameOverWindow::on_againButton_clicked()
{

    GameWindow *again = new GameWindow();
    again->setVisible(true);
    this->close();
}

void GameOverWindow::on_menuButton_clicked()
{
    MainWindow *menu = new MainWindow();
    menu->setVisible(true);
    this->close();
}

void GameOverWindow::recieveData(QString str)
{
    qDebug() << str;
   ui->scoreLabel->setText(str);
}
