#include "login.h"
#include "ui_login.h"
#include "QMessageBox"

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_signin_clicked()
{
    QString username = ui->email->text();
    QString password = ui->password->text();

        if(username ==  "test" && password == "test") {
            QMessageBox::information(this, "Login", "You are logged in");

        }
        else {
            QMessageBox::warning(this,"Login", "Email and password is not correct");
        }
}

