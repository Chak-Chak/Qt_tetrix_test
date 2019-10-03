#include "tetris_board.h"
#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QDir>
#include <QLabel>
#include <QtWidgets>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QDebug>

GameWindow::GameWindow(QWidget *parent):
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->setWindowFlags(Qt::CustomizeWindowHint);

    game_over_window = new GameOverWindow;

    //Подключение гифки на игровое окно
    //QString pathToGIF = QDir::currentPath()+QString("qrc:resourse/images/rainbow_menu.gif");
    //QString pathToGIF_2 = QDir::currentPath()+QString("qrc:resourse/images/dance_dog.gif");
    movie = new QMovie(":/images/resourse/images/rainbow_menu.gif");
    movie_2 = new QMovie(":/images/resourse/images/dance_dog.gif");
    ui->label->setMovie(movie);
    ui->media_label->setMovie(movie_2);
    ui->label->resize(800, 600);
    ui->label->show();
    movie->start();
    movie_2->start();



    board = new tetris_board;
    connect(board, SIGNAL(game_over_window()), this, SLOT(tetris_gameOver_info()));

    QLabel *nextPieceLabel = this->ui->nextPieceLabel;
    nextPieceLabel->setFrameStyle(QFrame::Box | QFrame::Raised);
    nextPieceLabel->setAlignment(Qt::AlignCenter);
    board->setNextPieceLabel(nextPieceLabel);

    QLCDNumber *scoreLcd = this->ui->scoreLcd;
    scoreLcd->setSegmentStyle(QLCDNumber::Filled);

    QPushButton *startButton = this->ui->startButton;
    startButton->setFocusPolicy(Qt::NoFocus);
    QPushButton *pauseButton = this->ui->pauseButton;
    pauseButton->setFocusPolicy(Qt::NoFocus);
    QPushButton *menuButton = this->ui->pushButton;
    menuButton->setFocusPolicy(Qt::NoFocus);

    connect(startButton, &QPushButton::clicked, board, &tetris_board::start);
    connect(pauseButton, &QPushButton::clicked, board, &tetris_board::pause);

#if __cplusplus >= 201402L
    connect(board, &tetris_board::scoreChanged,
            scoreLcd, qOverload<int>(&QLCDNumber::display));
#else
    connect(board, &tetris_board::scoreChanged,
            scoreLcd, QOverload<int>::of(&QLCDNumber::display));
#endif

    QGridLayout *layout = ui->grid;

    layout->addWidget(board, 0, 1, 6, 1);

    board->setFocus();

    //connect(ui->startButton, SIGNAL(clicked()), game_over_window, SLOT(show())); // подключаем сигнал к слоту
    connect(ui->startButton, SIGNAL(clicked()), this, SLOT(onButtonSend())); // подключаем клик по кнопке к определенному нами слоту
    connect(this, SIGNAL(sendData(QString)), game_over_window, SLOT(recieveData(QString))); // подключение сигнала к слоту нашей формы


    /*QMediaPlayer *m_player = new QMediaPlayer(this);          // Инициализация плеера
    QMediaPlaylist *m_playlist = new QMediaPlaylist(m_player);  // Инициализация плейлиста
    m_player->setPlaylist(m_playlist);          // Установка плейлиста в аудио плеер
    m_playlist->addMedia(QUrl("qrc:/music/menu_music_3.mp3"));       // Добавление трека в плейлист
    m_playlist->setPlaybackMode(QMediaPlaylist::CurrentItemInLoop); // Зацикливание трека
    m_player->setVolume(50);
    m_player->play();   // Запускаем трек*/
    //connect(this->ui->pushButton, &QPushButton::clicked, m_player, &QMediaPlayer::stop);
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::onButtonSend()
{
    emit sendData(QString::number(this->ui->scoreLcd->value())); // вызываем сигнал, в котором передаём введённые данные
}

void GameWindow::on_pushButton_clicked()
{
    if(gameIsStarted == false){
    this->close();
    emit main_window();
    }
}


QLabel *GameWindow::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
    return label;
}


void GameWindow::tetris_gameOver_info()
{
    emit sendData(QString::number(this->ui->scoreLcd->value()));
    game_over_window->show();
    this->close();
}


void GameWindow::on_pauseButton_clicked()
{
    qDebug() << QString::number(this->ui->scoreLcd->value());
}
