#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_button_10_clicked() {
    int money = ui->money_view->text().toInt();
    money += 10;
    ui->money_view->setText(QVariant(money).toString());
}

void MainWindow::on_button_50_clicked() {
    int money = ui->money_view->text().toInt();
    money += 50;
    ui->money_view->setText(QVariant(money).toString());
}

void MainWindow::on_button_100_clicked() {
    int money = ui->money_view->text().toInt();
    money += 100;
    ui->money_view->setText(QVariant(money).toString());
}

void MainWindow::on_coffeeButton_clicked() {
    int money = ui->money_view->text().toInt();
    if(money < 100)
        return;
    money -= 100;
    ui->money_view->setText(QVariant(money).toString());
}

void MainWindow::on_ColaButton_clicked() {
    int money = ui->money_view->text().toInt();
    if(money < 70)
        return;
    money -= 70;
    ui->money_view->setText(QVariant(money).toString());
}

void MainWindow::on_HotsixButton_clicked() {
    int money = ui->money_view->text().toInt();
    if(money < 90)
        return;
    money -= 90;
    ui->money_view->setText(QVariant(money).toString());
}
