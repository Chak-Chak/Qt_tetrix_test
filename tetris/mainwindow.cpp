#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    //Параметры экрана
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->setWindowFlags(Qt::CustomizeWindowHint);

    //Инициализация игрового окна
    game_window = new GameWindow();

    //Подключаем к слоту запуск главного окна по нажатию кнопки на игровом окне
    connect(game_window, &GameWindow::main_window, this, &MainWindow::show);

    //Подключение гифки в главное окно
    QString pathToGIF = QDir::currentPath()+QString("/space.gif");
    movie = new QMovie(pathToGIF);
    //movie = new QMovie("D:/Projects/Tetris/tetris/resourse/images/space.gif");
    ui->label->setMovie(movie);
    ui->label->resize(800, 600);
    ui->label->show();
    movie->start();
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
    QApplication::quit();
}
