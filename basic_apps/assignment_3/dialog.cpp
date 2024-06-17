#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_btn_1_clicked()
{
    ui->lbl->setText("  ONE");
}


void Dialog::on_btn_2_clicked()
{
    ui->lbl->setText("  TWO");
}


void Dialog::on_btn_3_clicked()
{
    ui->lbl->setText("  THREE");
}


void Dialog::on_buttonBox_accepted()
{
    QMessageBox::information(this,"Accepted", "  " + ui->lbl->text());
}


void Dialog::on_buttonBox_rejected()
{
    reject();
}

