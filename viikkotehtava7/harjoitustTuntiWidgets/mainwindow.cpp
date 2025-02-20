#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //Numero napit

    connect(ui->N1,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N2,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N3,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N4,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N5,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N6,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N7,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N8,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N9,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);
    connect(ui->N0,&QPushButton::clicked,
            this,&MainWindow::numberClickHandler);

    connect(ui->PLU1,&QPushButton::clicked,
            this,&MainWindow::operationSelect);
    connect(ui->MIN2,&QPushButton::clicked,
            this,&MainWindow::operationSelect);
    connect(ui->MUL3,&QPushButton::clicked,
            this,&MainWindow::operationSelect);
    connect(ui->DIV4,&QPushButton::clicked,
            this,&MainWindow::operationSelect);

    connect(ui->CLR,&QPushButton::clicked,
            this,&MainWindow::clearNumbers);

    connect(ui->CLR,&QPushButton::clicked,
            this,&MainWindow::clearNumbers);

    connect(ui->EQUAL,&QPushButton::clicked,this,&MainWindow::calculate);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName  = button->objectName();
    if(status == 0){
        ui->text1->setText(numberName.at(1));
        status=1;

    }else{
        ui->text3->setText(numberName.at(1));
    }

}
void MainWindow::operationSelect()
{
    QPushButton * button = qobject_cast<QPushButton *>(sender());
    QString numberName  = button->objectName();
    int operationNumber = numberName.at(3).digitValue();
    qDebug() << operationNumber;

    switch (operationNumber) {
    case 1:
        ui->text2->setText("+");

        break;
    case 2:
        ui->text2->setText("-");
        break;
    case 3:
        ui->text2->setText("*");
        break;
    case 4:
        ui->text2->setText("/");
        break;
    default:
        qDebug() << "Digit is not in range 1-4";
        break;
    }

}
void MainWindow::clearNumbers(){

    ui->text1->clear();
    ui->text2->clear();
    ui->text3->clear();
    ui->text4->clear();
    status = 0;
}
void MainWindow::calculate(){

    QString num1 = ui->text1->toPlainText();
    QString operation = ui->text2->toPlainText();
    QString num2 = ui->text3->toPlainText();
    int status = 0;

    bool ok1, ok2;
    double val1 = num1.toDouble(&ok1);
    double val2 = num2.toDouble(&ok2);

    if (ok1 && ok2) {
        double result = 0.0;

        if (operation == "+") {
            result = val1 + val2;
        } else if (operation == "-") {
            result = val1 - val2;
        } else if (operation == "*") {
            result = val1 * val2;
        } else if (operation == "/") {
            if (val2 != 0) {
                result = val1 / val2;
            } else {
                status = 1;
            }
        } else {
            status = 2;
        }

        if (status == 0) {
            ui->text4->setText(QString::number(result));
        } else if (status == 1) {
            ui->text4->setText("Error: Division by zero");
        } else if (status == 2) {
            ui->text4->setText("Error: Invalid operation");
        }
    } else {
        ui->text4->setText("Error: Invalid numbers");
    }
    status =0;
}
