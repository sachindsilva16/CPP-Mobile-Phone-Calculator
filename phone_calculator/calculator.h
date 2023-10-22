#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class calculator; }
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_nineButton_clicked();

    void on_eightButton_clicked();

    void on_sevenButton_clicked();

    void on_sixButton_clicked();

    void on_fiveButton_clicked();

    void on_fourButton_clicked();

    void on_threeButton_clicked();

    void on_twoButton_clicked();

    void on_oneButton_clicked();

    void on_zeroButton_clicked();

    void on_clearButton_clicked();

    void on_addButton_clicked();

    void on_subButton_clicked();

    void on_mulButton_clicked();

    void on_divButton_clicked();

    void on_resultButton_clicked();

private:
    Ui::calculator *ui;

    double num1;
    QString symbol;
};
#endif // CALCULATOR_H
