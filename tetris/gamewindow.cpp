#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::on_pushButton_clicked()
{
    this->close();
    emit main_window();
}
