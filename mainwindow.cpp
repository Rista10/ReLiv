#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "createaccount.h"
#include "homepage.h"

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


void MainWindow::on_login_clicked()
{
    login l1;
    l1.setModal(true);
    l1.exec();
}


void MainWindow::on_register_2_clicked()
{
    createAccount create;
    create.setModal(true);
    create.exec();
}

