#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    int money{0};
    void changeMoney(int diff);

private slots:
    void on_phCoin10_clicked();

    void on_phCoin50_clicked();

    void on_phCoin100_clicked();

    void on_phCoin500_clicked();

    void on_phCoffee_clicked();

    void on_phTea_clicked();

    void on_phMilk_clicked();

    void on_phReset_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
