/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QCommandLinkButton *commandLinkButton;
    QCommandLinkButton *commandLinkButton_2;
    QCommandLinkButton *commandLinkButton_3;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(279, 370);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(10, 10, 236, 200));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        commandLinkButton = new QCommandLinkButton(widget);
        commandLinkButton->setObjectName("commandLinkButton");

        verticalLayout->addWidget(commandLinkButton);

        commandLinkButton_2 = new QCommandLinkButton(widget);
        commandLinkButton_2->setObjectName("commandLinkButton_2");

        verticalLayout->addWidget(commandLinkButton_2);

        commandLinkButton_3 = new QCommandLinkButton(widget);
        commandLinkButton_3->setObjectName("commandLinkButton_3");

        verticalLayout->addWidget(commandLinkButton_3);

        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        buttonBox = new QDialogButtonBox(widget);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Help|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 279, 42));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("MainWindow", "Option 1", nullptr));
        commandLinkButton->setDescription(QCoreApplication::translate("MainWindow", "This is option 1", nullptr));
        commandLinkButton_2->setText(QCoreApplication::translate("MainWindow", "option 2", nullptr));
        commandLinkButton_2->setDescription(QCoreApplication::translate("MainWindow", "This is option 2", nullptr));
#if QT_CONFIG(whatsthis)
        commandLinkButton_3->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        commandLinkButton_3->setText(QCoreApplication::translate("MainWindow", "option 3", nullptr));
        commandLinkButton_3->setDescription(QCoreApplication::translate("MainWindow", "This is optino 3", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
