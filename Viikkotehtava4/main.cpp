#include <QCoreApplication>
#include "asiakas.h"
using namespace std;
int main()
{
    Asiakas asiakas1("Joni",300);
    asiakas1.talletus(300);
    asiakas1.showSaldo();

    Asiakas asiakas2("Joni2",400);
    asiakas2.talletus(300);

    asiakas1.showSaldo();

    asiakas2.showSaldo();

    cout <<endl << "siirto"<< endl;

    asiakas1.tilisiirto(200,asiakas2);
    asiakas1.showSaldo();

    asiakas2.showSaldo();
}
