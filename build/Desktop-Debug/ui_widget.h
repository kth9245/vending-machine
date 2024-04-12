/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLCDNumber *lcdNumber;
    QPushButton *phCoin10;
    QPushButton *phCoin50;
    QPushButton *phCoin100;
    QPushButton *phCoin500;
    QPushButton *phCoffee;
    QPushButton *phTea;
    QPushButton *phMilk;
    QPushButton *phReset;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(10, 10, 281, 111));
        phCoin10 = new QPushButton(Widget);
        phCoin10->setObjectName("phCoin10");
        phCoin10->setGeometry(QRect(10, 130, 81, 31));
        phCoin50 = new QPushButton(Widget);
        phCoin50->setObjectName("phCoin50");
        phCoin50->setGeometry(QRect(10, 170, 81, 31));
        phCoin100 = new QPushButton(Widget);
        phCoin100->setObjectName("phCoin100");
        phCoin100->setGeometry(QRect(10, 210, 81, 31));
        phCoin500 = new QPushButton(Widget);
        phCoin500->setObjectName("phCoin500");
        phCoin500->setGeometry(QRect(10, 250, 81, 31));
        phCoffee = new QPushButton(Widget);
        phCoffee->setObjectName("phCoffee");
        phCoffee->setGeometry(QRect(170, 130, 121, 31));
        phTea = new QPushButton(Widget);
        phTea->setObjectName("phTea");
        phTea->setGeometry(QRect(170, 170, 121, 31));
        phMilk = new QPushButton(Widget);
        phMilk->setObjectName("phMilk");
        phMilk->setGeometry(QRect(170, 210, 121, 31));
        phReset = new QPushButton(Widget);
        phReset->setObjectName("phReset");
        phReset->setGeometry(QRect(170, 250, 121, 31));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        phCoin10->setText(QCoreApplication::translate("Widget", "10", nullptr));
        phCoin50->setText(QCoreApplication::translate("Widget", "50", nullptr));
        phCoin100->setText(QCoreApplication::translate("Widget", "100", nullptr));
        phCoin500->setText(QCoreApplication::translate("Widget", "500", nullptr));
        phCoffee->setText(QCoreApplication::translate("Widget", "Coffee(100)", nullptr));
        phTea->setText(QCoreApplication::translate("Widget", "Tea(150)", nullptr));
        phMilk->setText(QCoreApplication::translate("Widget", "Milk(200)", nullptr));
        phReset->setText(QCoreApplication::translate("Widget", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
