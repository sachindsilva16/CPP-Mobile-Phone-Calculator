#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}


void calculator::on_nineButton_clicked()
{
    ui->outputLineEdit->setText("9");

}


void calculator::on_eightButton_clicked()
{
    ui->outputLineEdit->setText("8");

}


void calculator::on_sevenButton_clicked()
{
    ui->outputLineEdit->setText("7");

}


void calculator::on_sixButton_clicked()
{
    ui->outputLineEdit->setText("6");

}


void calculator::on_fiveButton_clicked()
{
    ui->outputLineEdit->setText("5");

}


void calculator::on_fourButton_clicked()
{
    ui->outputLineEdit->setText("4");

}


void calculator::on_threeButton_clicked()
{
    ui->outputLineEdit->setText("3");

}


void calculator::on_twoButton_clicked()
{
    ui->outputLineEdit->setText("2");

}


void calculator::on_oneButton_clicked()
{
    ui->outputLineEdit->setText("1");

}


void calculator::on_zeroButton_clicked()
{
    ui->outputLineEdit->setText("0");

}

