#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
QT_BEGIN_NAMESPACE
namespace Ui {
class Dialog;
}
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_accept_clicked();
    void doStuff();

    void on_btnEdittor_clicked();

private:
    Ui::Dialog *ui;
};
#endif // DIALOG_H
