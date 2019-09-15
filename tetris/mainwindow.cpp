#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);

    //Инициализация игрового окна
    game_window = new GameWindow();

    //Подключаем к слоту запуск главного окна по нажатию кнопки на игровом окне
    connect(game_window, &GameWindow::main_window, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_play_clicked()
{
    game_window->show();
    this->close();
}

void MainWindow::on_exit_clicked()
{
    this->close();
}
