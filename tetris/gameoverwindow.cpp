#include "gameoverwindow.h"
#include "ui_gameoverwindow.h"

GameOverWindow::GameOverWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameOverWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->setWindowFlags(Qt::CustomizeWindowHint);

    //Инициализация окна концовки
    //game_window = new GameWindow();

    //Подключаем к слоту запуск главного окна по нажатию кнопки в окне концовки
    //connect(game_window, &GameWindow::main_window, this, &GameOverWindow::show);
}

GameOverWindow::~GameOverWindow()
{
    delete ui;
}

void GameOverWindow::on_againButton_clicked()
{
    this->close();
    //game_window->show();
}

void GameOverWindow::on_menuButton_clicked()
{
    this->close();
    //main_window->show();
}
