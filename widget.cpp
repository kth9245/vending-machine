#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->phCoffee->setEnabled(0);
    ui->phTea->setEnabled(0);
    ui->phMilk->setEnabled(0);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int diff)
{
    if (diff == 1) money = 0;
    else money+=diff;
    ui->lcdNumber->display(money);
    if(money >= 100) ui->phCoffee->setEnabled(1);
    else ui->phCoffee->setEnabled(0);
    if(money >= 150) ui->phTea->setEnabled(1);
    else ui->phTea->setEnabled(0);
    if(money >= 200) ui->phMilk->setEnabled(1);
    else ui->phMilk->setEnabled(0);
}

void Widget::on_phCoin10_clicked()
{
    changeMoney(10);
}


void Widget::on_phCoin50_clicked()
{
    changeMoney(50);
}


void Widget::on_phCoin100_clicked()
{
    changeMoney(100);
}


void Widget::on_phCoin500_clicked()
{
    changeMoney(500);
}



void Widget::on_phCoffee_clicked()
{
    changeMoney(-100);
}


void Widget::on_phTea_clicked()
{
    changeMoney(-150);
}


void Widget::on_phMilk_clicked()
{
    changeMoney(-200);
}


void Widget::on_phReset_clicked()
{
    QMessageBox mb;
    char charge[40];
    int coin500, coin100, coin50, coin10;
    coin500 = money/500;
    money = money%500;
    coin100 = money/100;
    money = money%100;
    coin50 = money/50;
    money = money%50;
    coin10 = money/10;

    sprintf(charge, "Charge\n500 : %d\n100 : %d\n50 : %d\n10 : %d", coin500, coin100, coin50, coin10);
    changeMoney(1);
    mb.information(this, "Charge", charge);
}

