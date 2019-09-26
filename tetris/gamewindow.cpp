#include "gamewindow.h"
#include "tetris_board.h"
#include "ui_gamewindow.h"
#include <QDir>
#include <QLabel>
#include <QtWidgets>

GameWindow::GameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
    this->setFixedSize(800, 600);
    this->setWindowFlags(Qt::CustomizeWindowHint);

    game_over_window = new GameOverWindow;

    //Подключение гифки на игровое окно
    QString pathToGIF = QDir::currentPath()+QString("/space.gif");
    movie = new QMovie(pathToGIF);
    //movie = new QMovie("space.gif");
    ui->label->setMovie(movie);
    ui->label->resize(800, 600);
    ui->label->show();
    movie->start();

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


QLabel *GameWindow::createLabel(const QString &text)
{
    QLabel *label = new QLabel(text);
    label->setAlignment(Qt::AlignHCenter | Qt::AlignBottom);
    return label;
}


void GameWindow::tetris_gameOver_info()
{
    game_over_window->show();
    this->close();
}
