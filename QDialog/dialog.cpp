#include "dialog.h"
#include "./ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->btnConnect, &QPushButton::clicked, this, &Dialog::doStuff);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_accept_clicked()
{
    QMessageBox::information(this,"Name","Selam " + ui->userName->text() + " ;)");
    this->accept();
}

void Dialog::doStuff()
{
    qInfo() << "Clicked " << QDateTime::currentDateTime().toString();
    // accept();  this will close the app

}


void Dialog::on_btnEdittor_clicked()
{
    doStuff();
}

