/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *userName;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *accept;
    QPushButton *close;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnEdittor;
    QPushButton *btnConnect;
    QPushButton *btnInternal;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(608, 315);
        widget = new QWidget(Dialog);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(110, 10, 350, 143));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        userName = new QLineEdit(widget);
        userName->setObjectName("userName");

        verticalLayout->addWidget(userName);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        accept = new QPushButton(widget);
        accept->setObjectName("accept");

        horizontalLayout->addWidget(accept);

        close = new QPushButton(widget);
        close->setObjectName("close");

        horizontalLayout->addWidget(close);


        verticalLayout_2->addLayout(horizontalLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        btnEdittor = new QPushButton(widget);
        btnEdittor->setObjectName("btnEdittor");

        verticalLayout_3->addWidget(btnEdittor);

        btnConnect = new QPushButton(widget);
        btnConnect->setObjectName("btnConnect");

        verticalLayout_3->addWidget(btnConnect);

        btnInternal = new QPushButton(widget);
        btnInternal->setObjectName("btnInternal");

        verticalLayout_3->addWidget(btnInternal);


        horizontalLayout_2->addLayout(verticalLayout_3);


        retranslateUi(Dialog);
        QObject::connect(close, &QPushButton::clicked, Dialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Ad\304\261n\304\261z\304\261 girin", nullptr));
        accept->setText(QCoreApplication::translate("Dialog", "Kabul ediyorum", nullptr));
        close->setText(QCoreApplication::translate("Dialog", "reddediyorum", nullptr));
        btnEdittor->setText(QCoreApplication::translate("Dialog", "Editor", nullptr));
        btnConnect->setText(QCoreApplication::translate("Dialog", "Connect", nullptr));
        btnInternal->setText(QCoreApplication::translate("Dialog", "Internal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
