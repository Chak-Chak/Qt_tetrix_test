#ifndef GAMEOVERWINDOW_H
#define GAMEOVERWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QString>
#include <QMovie>

namespace Ui {
class GameOverWindow;
}

class GameOverWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameOverWindow(QWidget *parent = nullptr);
    ~GameOverWindow();

public slots:
    void recieveData(QString str);



private slots:
    void on_againButton_clicked();

    void on_menuButton_clicked();


private:  // default - private
    Ui::GameOverWindow *ui;

    QLabel *goscore, *scoreLabel;
    QMovie *go_movie, *go2_movie, *go3_movie;

};

#endif // GAMEOVERWINDOW_H
