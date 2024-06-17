#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_commandLinkButton_clicked()
{
    selectOption(sender());
}


void MainWindow::on_commandLinkButton_2_clicked()
{
    selectOption(sender());
}


void MainWindow::on_commandLinkButton_3_clicked()
{
    selectOption(sender());
}


void MainWindow::on_buttonBox_accepted()
{
    QMessageBox::information(this, "OK", "Closing");

}


void MainWindow::on_buttonBox_rejected()
{
      QMessageBox::critical(this, "Cancel", "Closing");
}


void MainWindow::on_buttonBox_helpRequested()
{
     QMessageBox::critical(this, "Help", "Helping");
}

void MainWindow::selectOption(QObject *sender)
{
    QCommandLinkButton* btn = qobject_cast<QCommandLinkButton*>(sender);
    if(!btn)
        return;
    ui->label->setText(btn->text());

}

