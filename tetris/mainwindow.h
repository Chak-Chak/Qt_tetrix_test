#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMovie>
#include "gamewindow.h"
#include <QMediaPlayer>
#include <QMediaPlaylist>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMovie *movie;
    QMediaPlayer *m_player;
    QMediaPlaylist *m_playlist;

private slots:

    void on_play_clicked();

    void on_exit_clicked();

private:
    Ui::MainWindow *ui;
    GameWindow *game_window;
};
#endif // MAINWINDOW_H
