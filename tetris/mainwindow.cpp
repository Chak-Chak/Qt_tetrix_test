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
    //QString pathToGIF = QDir::currentPath()+QString("qrc:resourse/images/rainbow_menu.gif");
    movie = new QMovie(":/images/resourse/images/rainbow_menu.gif");
    ui->label->setMovie(movie);
    ui->label->resize(800, 600);
    ui->label->show();
    movie->start();

    m_player = new QMediaPlayer(this);          // Инициализация плеера
    m_playlist = new QMediaPlaylist(m_player);  // Инициализация плейлиста

    m_player->setPlaylist(m_playlist);          // Установка плейлиста в аудио плеер
    m_playlist->addMedia(QUrl(":/music/resourse/sounds/menu_music_3.mp3"));       // Добавление трека в плейлист
    m_playlist->setPlaybackMode(QMediaPlaylist::CurrentItemOnce); // Зацикливание трека
    m_player->play();   // Запускаем трек
    //connect(this->ui->play, &QPushButton::clicked, m_player, &QMediaPlayer::stop);
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
