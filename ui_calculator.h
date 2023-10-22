/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QLineEdit *outputLineEdit;
    QLabel *mainTitleLabel;
    QPushButton *addButton;
    QPushButton *subButton;
    QPushButton *mulButton;
    QPushButton *eightButton;
    QPushButton *nineButton;
    QPushButton *divButton;
    QPushButton *fiveButton;
    QPushButton *sixButton;
    QPushButton *sevenButton;
    QPushButton *zeroButton;
    QPushButton *oneButton;
    QPushButton *fourButton;
    QPushButton *twoButton;
    QPushButton *threeButton;
    QPushButton *resultButton;
    QPushButton *clearButton;
    QMenuBar *menubar;
    QMenu *menuPhone_Calculator;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName(QString::fromUtf8("calculator"));
        calculator->resize(319, 440);
        calculator->setStyleSheet(QString::fromUtf8("background-color:black"));
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        outputLineEdit = new QLineEdit(centralwidget);
        outputLineEdit->setObjectName(QString::fromUtf8("outputLineEdit"));
        outputLineEdit->setGeometry(QRect(30, 50, 261, 71));
        QFont font;
        font.setPointSize(40);
        outputLineEdit->setFont(font);
        outputLineEdit->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"border-radius:10%;"));
        mainTitleLabel = new QLabel(centralwidget);
        mainTitleLabel->setObjectName(QString::fromUtf8("mainTitleLabel"));
        mainTitleLabel->setGeometry(QRect(80, 20, 181, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Inter"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        mainTitleLabel->setFont(font1);
        mainTitleLabel->setStyleSheet(QString::fromUtf8("color:orange;\n"
""));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(100, 150, 51, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Inter"));
        font2.setPointSize(20);
        addButton->setFont(font2);
        addButton->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        subButton = new QPushButton(centralwidget);
        subButton->setObjectName(QString::fromUtf8("subButton"));
        subButton->setGeometry(QRect(170, 150, 51, 41));
        subButton->setFont(font2);
        subButton->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        mulButton = new QPushButton(centralwidget);
        mulButton->setObjectName(QString::fromUtf8("mulButton"));
        mulButton->setGeometry(QRect(240, 150, 51, 41));
        mulButton->setFont(font2);
        mulButton->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        eightButton = new QPushButton(centralwidget);
        eightButton->setObjectName(QString::fromUtf8("eightButton"));
        eightButton->setGeometry(QRect(100, 210, 51, 41));
        eightButton->setFont(font2);
        eightButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        nineButton = new QPushButton(centralwidget);
        nineButton->setObjectName(QString::fromUtf8("nineButton"));
        nineButton->setGeometry(QRect(30, 210, 51, 41));
        nineButton->setFont(font2);
        nineButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        divButton = new QPushButton(centralwidget);
        divButton->setObjectName(QString::fromUtf8("divButton"));
        divButton->setGeometry(QRect(240, 210, 51, 41));
        divButton->setFont(font2);
        divButton->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        fiveButton = new QPushButton(centralwidget);
        fiveButton->setObjectName(QString::fromUtf8("fiveButton"));
        fiveButton->setGeometry(QRect(100, 270, 51, 41));
        fiveButton->setFont(font2);
        fiveButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        sixButton = new QPushButton(centralwidget);
        sixButton->setObjectName(QString::fromUtf8("sixButton"));
        sixButton->setGeometry(QRect(30, 270, 51, 41));
        sixButton->setFont(font2);
        sixButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        sevenButton = new QPushButton(centralwidget);
        sevenButton->setObjectName(QString::fromUtf8("sevenButton"));
        sevenButton->setGeometry(QRect(170, 210, 51, 41));
        sevenButton->setFont(font2);
        sevenButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        zeroButton = new QPushButton(centralwidget);
        zeroButton->setObjectName(QString::fromUtf8("zeroButton"));
        zeroButton->setGeometry(QRect(240, 330, 51, 41));
        zeroButton->setFont(font2);
        zeroButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        oneButton = new QPushButton(centralwidget);
        oneButton->setObjectName(QString::fromUtf8("oneButton"));
        oneButton->setGeometry(QRect(170, 330, 51, 41));
        oneButton->setFont(font2);
        oneButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        fourButton = new QPushButton(centralwidget);
        fourButton->setObjectName(QString::fromUtf8("fourButton"));
        fourButton->setGeometry(QRect(170, 270, 51, 41));
        fourButton->setFont(font2);
        fourButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        twoButton = new QPushButton(centralwidget);
        twoButton->setObjectName(QString::fromUtf8("twoButton"));
        twoButton->setGeometry(QRect(100, 330, 51, 41));
        twoButton->setFont(font2);
        twoButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        threeButton = new QPushButton(centralwidget);
        threeButton->setObjectName(QString::fromUtf8("threeButton"));
        threeButton->setGeometry(QRect(30, 330, 51, 41));
        threeButton->setFont(font2);
        threeButton->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        resultButton = new QPushButton(centralwidget);
        resultButton->setObjectName(QString::fromUtf8("resultButton"));
        resultButton->setGeometry(QRect(240, 270, 51, 41));
        resultButton->setFont(font2);
        resultButton->setStyleSheet(QString::fromUtf8("background-color:yellowgreen;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        clearButton = new QPushButton(centralwidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(30, 150, 51, 41));
        clearButton->setFont(font2);
        clearButton->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black;\n"
"border-radius:10px;\n"
""));
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 319, 20));
        menuPhone_Calculator = new QMenu(menubar);
        menuPhone_Calculator->setObjectName(QString::fromUtf8("menuPhone_Calculator"));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        calculator->setStatusBar(statusbar);

        menubar->addAction(menuPhone_Calculator->menuAction());

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QApplication::translate("calculator", "calculator", nullptr));
        mainTitleLabel->setText(QApplication::translate("calculator", "Phone Calculator", nullptr));
        addButton->setText(QApplication::translate("calculator", "+", nullptr));
        subButton->setText(QApplication::translate("calculator", "-", nullptr));
        mulButton->setText(QApplication::translate("calculator", "*", nullptr));
        eightButton->setText(QApplication::translate("calculator", "8", nullptr));
        nineButton->setText(QApplication::translate("calculator", "9", nullptr));
        divButton->setText(QApplication::translate("calculator", "/", nullptr));
        fiveButton->setText(QApplication::translate("calculator", "5", nullptr));
        sixButton->setText(QApplication::translate("calculator", "6", nullptr));
        sevenButton->setText(QApplication::translate("calculator", "7", nullptr));
        zeroButton->setText(QApplication::translate("calculator", "0", nullptr));
        oneButton->setText(QApplication::translate("calculator", "1", nullptr));
        fourButton->setText(QApplication::translate("calculator", "4", nullptr));
        twoButton->setText(QApplication::translate("calculator", "2", nullptr));
        threeButton->setText(QApplication::translate("calculator", "3", nullptr));
        resultButton->setText(QApplication::translate("calculator", "=", nullptr));
        clearButton->setText(QApplication::translate("calculator", "C", nullptr));
        menuPhone_Calculator->setTitle(QApplication::translate("calculator", "Phone Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
