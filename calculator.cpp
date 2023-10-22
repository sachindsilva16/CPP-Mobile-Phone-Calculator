#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    num1=0;
    symbol="";
}

calculator::~calculator()
{
    delete ui;
}


void calculator::on_nineButton_clicked()
{

    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"9");

}


void calculator::on_eightButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"8");

}


void calculator::on_sevenButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"7");
}


void calculator::on_sixButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"6");

}


void calculator::on_fiveButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"5");

}


void calculator::on_fourButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"4");

}


void calculator::on_threeButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"3");

}


void calculator::on_twoButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"2");

}


void calculator::on_oneButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"1");

}


void calculator::on_zeroButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText(num1+"0");

}


void calculator::on_clearButton_clicked()
{
    QString num1 = ui->outputLineEdit->text();
    ui->outputLineEdit->setText("");


}


void calculator::on_addButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "+";
    // Clear the lineEdit to enter the second number

    ui->outputLineEdit->setText("");

}


void calculator::on_subButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "-";
    // Clear the lineEdit to enter the second number

    ui->outputLineEdit->setText("");
}


void calculator::on_mulButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "*";
    // Clear the lineEdit to enter the second number

    ui->outputLineEdit->setText("");
}


void calculator::on_divButton_clicked()
{
    num1 = ui->outputLineEdit->text().toDouble();
    symbol = "/";

    // Clear the lineEdit to enter the second number

    ui->outputLineEdit->setText("");
}


void calculator::on_resultButton_clicked()
{
    double num2 = ui->outputLineEdit->text().toDouble();

    double result =0;
    if(symbol == "+"){
        result = num1+num2;
    }
    else if(symbol == "-"){
        result = num1-num2;
    }
    else if(symbol == "*"){
        result = num1*num2;
    }
    else if(symbol == "/"){
        result = num1/num2;
    }

    ui->outputLineEdit->setText(QString :: number(result));
}

