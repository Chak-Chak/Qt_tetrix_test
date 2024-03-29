#ifndef TETRIS_BOARD_H
#define TETRIS_BOARD_H

#include <QBasicTimer>
#include <QFrame>
#include <QPointer>
#include <QVector>

#include <tetris_piece.h>

QT_BEGIN_NAMESPACE
class QLabel;
QT_END_NAMESPACE

class tetris_board : public QFrame
{
    Q_OBJECT

public:
    tetris_board(QWidget *parent = nullptr);

    void setNextPieceLabel(QLabel *label);
    QSize sizeHint() const override;
    QSize minimumSizeHint() const override;
    int score;
    bool isStarted;

public slots:
    void start();
    void pause();

signals:
    void IsStarted(bool isStarted);
    void scoreChanged(int score);
    void levelChanged(int level);
    void linesRemovedChanged(int numLines);
    void game_over_window();

protected:
    void paintEvent(QPaintEvent *event) override;
    void keyPressEvent(QKeyEvent *event) override;
    void timerEvent(QTimerEvent *event) override;

private:
    enum { BoardWidth = 10, BoardHeight = 22 };
    TetrixShape &shapeAt(int x, int y) { return board[(y * BoardWidth) + x]; }
    int timeoutTime() { return 1000 / (1 + level); }
    int squareWidth() { return contentsRect().width() / BoardWidth; }
    int squareHeight() { return contentsRect().height() / BoardHeight; }
    void clearBoard();
    void dropDown();
    void oneLineDown();
    void pieceDropped(int dropHeight);
    void removeFullLines();
    void newPiece();
    void showNextPiece();
    bool tryMove(const tetris_piece &newPiece, int newX, int newY);
    void drawSquare(QPainter &painter, int x, int y, TetrixShape shape);


    QVector <bool> state;
    QBasicTimer timer;
    QPointer<QLabel> nextPieceLabel;
    bool isPaused;
    bool isWaitingAfterLine;
    tetris_piece curPiece;
    tetris_piece nextPiece;
    int curX;
    int curY;
    int numLinesRemoved;
    int numPiecesDropped;
    int level;
    TetrixShape board[BoardWidth * BoardHeight];
};

#endif // TETRIS_BOARD_H
