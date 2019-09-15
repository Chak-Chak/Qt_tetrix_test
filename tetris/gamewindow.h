#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QDialog>

namespace Ui {
class GameWindow;
}

class GameWindow : public QDialog
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

signals:
    void main_window();

private slots:
    void on_pushButton_clicked();

private:
    Ui::GameWindow *ui;
};

#endif // GAMEWINDOW_H
