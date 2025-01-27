#ifndef ASIAKAS_H
#define ASIAKAS_H
#include <string>
#include <iostream>
#include "luottotili.h"
#include "pankkitili.h"
using namespace std;
class Asiakas
{
private:
    Pankkitili * tili;
    Luottotili * luottoTili;
    string nimi;

public:
    Asiakas(string, double);
    string getNimi(void);

    void showSaldo(void);
    bool talletus(double);
    bool nosto(double);

    bool luotonMaksu(double);
    bool luotonNosto(double);
    bool tilisiirto(double, Asiakas&);

};

#endif // ASIAKAS_H
