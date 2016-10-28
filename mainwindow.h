#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button_10_clicked();

    void on_button_50_clicked();

    void on_button_100_clicked();

    void on_coffeeButton_clicked();

    void on_ColaButton_clicked();

    void on_HotsixButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif
