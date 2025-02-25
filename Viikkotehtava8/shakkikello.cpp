#include "shakkikello.h"
#include "ui_shakkikello.h"
#include <QString>
#include <string>
#include <QKeyEvent>

Shakkikello::Shakkikello(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Shakkikello)
{

    ui->setupUi(this);
    foreach(QPushButton *button, findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
    connect(ui->START,&QPushButton::clicked,
            this,&Shakkikello::startGame);
    connect(ui->STOP,&QPushButton::clicked,
            this,&Shakkikello::stopGame);
    connect(ui->Switch,&QPushButton::clicked,
            this,&Shakkikello::switchPlayer);
    connect(ui->Switch2,&QPushButton::clicked,
            this,&Shakkikello::switchPlayer);
    connect(ui->Fast,&QPushButton::clicked,
            this,&Shakkikello::fastGame);
    connect(ui->Slow,&QPushButton::clicked,
            this,&Shakkikello::slowGame);

    connect(this, &Shakkikello::spacebarPressed, this, &Shakkikello::switchPlayer);

    connect(&timer, &QTimer::timeout, this, &Shakkikello::onTimeout);

}
void Shakkikello::keyPressEvent(QKeyEvent *event)
{
    qDebug() << event->key();

    if (event->key() == Qt::Key_Space)
    {
        qDebug()  << "test";
        emit spacebarPressed();

    }
    QWidget::keyPressEvent(event);
}
Shakkikello::~Shakkikello()
{

    delete ui;
}
void Shakkikello::changeLabel(string text){
    this->ui->label->setText(QString::fromStdString(text));
}
void Shakkikello::fastGame(){
    if(currentPlayer==0){
        changeLabel("Start fast game");
        this->gameType=120;
    }
}

void Shakkikello::slowGame(){
    if(currentPlayer==0){
    changeLabel("Start slow game");
    this->gameType=300;
    }
}
void Shakkikello::switchPlayer(){

    if(this->currentPlayer==0) return;

    if(this->currentPlayer==1){
        this->currentPlayer=2;
        this->changeLabel("PLAYER 2 TURN");

    }
    else{
        this->currentPlayer=1;
        this->changeLabel("PLAYER 1 TURN");
    }

}

void Shakkikello::startGame()
{

    this->player1Time = this->gameType;
    this->player2Time = this->gameType;
    this->ui->Progress1->setValue(100);
    this->ui->Progress2->setValue(100);

    this->changeLabel("PLAYER 1 TURN");
    this->currentPlayer=1;
    this->timer.start(1000);
}

void Shakkikello::onTimeout() {
    if (this->player1Time > 0) {
        this->player1Time -= 1;
    }
    if (this->player2Time > 0) {
        this->player2Time -= 1;
    }

    qDebug() << "Player 1 Time:" << this->player1Time;
    qDebug() << "Player 2 Time:" << this->player2Time;
     qDebug() << "Game:" << this->gameType;

    if(this->currentPlayer==1) ui->Progress1->setValue((this->player1Time * 100) / this->gameType);
    if(this->currentPlayer==2) ui->Progress2->setValue((this->player2Time * 100) / this->gameType);



    if (this->player1Time <= 0 && this->player2Time <= 0) {
        this->stopGame();
    }

}
void Shakkikello::stopGame(){
    qDebug() << "game sto";

    this->changeLabel("Game Over!");
    timer.stop();
    gameType = 300;
    player1Time = 0;
    player2Time = 0;
    currentPlayer = 0;


}
