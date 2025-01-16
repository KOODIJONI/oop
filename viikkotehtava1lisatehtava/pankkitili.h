#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>
using namespace std;

class Pankkitili
{
private:
    string tilinumero;
    string tilinomsitaja;
    double saldo;

public:
    Pankkitili(string,string,double);
    void talleta(double);
    void nosta(double);
    void tulostaTilitiedot(void);
    string getTilinumero();
    double getSaldo();
    bool siirra(Pankkitili&,double);
};



#endif // PANKKITILI_H
