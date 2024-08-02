#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString username = ui->username->text();
    QString password = ui->password->text();

    if (username == "admin" & password =="password" ){
        QMessageBox::information(this,"Login","Your Login is successful");
        hide();
        dialog = new Dialog(this);
        dialog->show();

    }
    else{
        QMessageBox::warning(this, "Login","Such user not found");
    }
}

