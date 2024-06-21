#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QMessageBox>

float num1 = 0.0;
float num2 = 0.0;
bool add = false;
bool divi = false;
bool mul = false;
bool sub = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->Display->setText("");
}

MainWindow::~MainWindow()
{
    delete ui;

}

void MainWindow::on_pushButton_clicked()
{
    QString str = ui->Display->text();
    num2 = str.toFloat();
    if(add)
    {
        num1 += num2;
        ui->Display->setText(QString::number(num1));
        num2 = 0.0;
        add = false;
    }
    if(sub)
    {
        num1 -= num2;
        ui->Display->setText(QString::number(num1));
        num2 = 0.0;
        sub = false;
    }
    if(mul)
    {
        num1 = num2 * num1;
        ui->Display->setText(QString::number(num1));
        num2 = 0.0;
        mul = false;
    }
    if(divi)
    {
        if (num2==0)
        {
            num2= 1.0;
            QMessageBox::information(this, "Division Error", "numbers can't multiple by zero, it will change as one");
        }
        num1 /= num2;
        ui->Display->setText(QString::number(num1));
        num2 = 0.0;
        divi = false;
    }
}


void MainWindow::on_btn1_clicked()
{
    QString txt= ui->Display->text();
    txt += "1";
     ui->Display->setText(txt);
}


void MainWindow::on_btn2_clicked()
{
    QString txt= ui->Display->text();
    txt += "2";
    ui->Display->setText(txt);
}


void MainWindow::on_btn3_clicked()
{
    QString txt= ui->Display->text();
    txt += "3";
    ui->Display->setText(txt);
}


void MainWindow::on_btn4_clicked()
{
    QString txt= ui->Display->text();
    txt += "4";
    ui->Display->setText(txt);
}


void MainWindow::on_btn5_clicked()
{
    QString txt= ui->Display->text();
    txt += "5";
    ui->Display->setText(txt);
}


void MainWindow::on_btn6_clicked()
{
    QString txt= ui->Display->text();
    txt += "6";
    ui->Display->setText(txt);
}


void MainWindow::on_btn7_clicked()
{
    QString txt= ui->Display->text();
    txt += "7";
    ui->Display->setText(txt);
}


void MainWindow::on_btn8_clicked()
{
    QString txt= ui->Display->text();
    txt += "8";
    ui->Display->setText(txt);
}


void MainWindow::on_btn9_clicked()
{
    QString txt= ui->Display->text();
    txt += "9";
    ui->Display->setText(txt);
}


void MainWindow::on_btn0_clicked()
{
    QString txt= ui->Display->text();
    txt += "0";
    ui->Display->setText(txt);
}


void MainWindow::on_btnPoint_clicked()
{
    QString txt= ui->Display->text();
    txt += ".";
    ui->Display->setText(txt);
}


void MainWindow::on_btn_add_clicked()
{
    QString str = ui->Display->text();
    num2 = str.toFloat();
    add = true;
    ui->Display->setText("");
}


void MainWindow::on_btn_sub_clicked()
{
    QString str = ui->Display->text();
    num1 = str.toFloat();
    sub = true;
    ui->Display->setText("");
}


void MainWindow::on_btn_div_clicked()
{
    QString str = ui->Display->text();
    num1 = str.toFloat();
    divi = true;
    ui->Display->setText("");
}


void MainWindow::on_btn_mul_clicked()
{
    QString str = ui->Display->text();
    num1 = str.toFloat();
    mul = true;
    ui->Display->setText("");
}


void MainWindow::on_btn_ac_clicked()
{
    float num1 = 0.0;
    float num2 = 0.0;
    add = false;
    sub = false;
    divi = false;
    mul = false;
    ui->Display->setText("");
}



