#include "gameoverwindow.h"
#include "ui_gameoverwindow.h"
#include "mainwindow.h"
#include "gamewindow.h"

GameOverWindow::GameOverWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOverWindow)
{
    ui->setupUi(this);
    this->setFixedSize(400, 300);
    this->setWindowFlags(Qt::CustomizeWindowHint);

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
