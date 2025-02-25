#ifndef SHAKKIKELLO_H
#define SHAKKIKELLO_H

#include <QMainWindow>
#include <QTimer>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui {
class Shakkikello;
}
QT_END_NAMESPACE

class Shakkikello : public QMainWindow
{
    Q_OBJECT

public:
    Shakkikello(QWidget *parent = nullptr);

    ~Shakkikello();

private:
    void changeLabel(string);
    void startGame();
    void onTimeout();
    void slowGame();
    void fastGame();
    void switchPlayer();
    void stopGame();


    Ui::Shakkikello *ui;
    QTimer timer;

    short gameType = 300;
    short player1Time = 0;
    short player2Time = 0;
    short currentPlayer = 0;
protected:
    void keyPressEvent(QKeyEvent *event) override;
signals:
    void spacebarPressed();
private slots:
    void onSpacebarPressed()
    {
        qDebug() << "Spacebar Pressed!";
        startGame();  // Call startGame when spacebar is pressed
    }
};
#endif // SHAKKIKELLO_H
