#include "pankkitili.h"
#include <iostream>
#include <string>
Pankkitili::Pankkitili(string tilinumero,string omistaja,double maara)
{
    Pankkitili::saldo=maara;
    Pankkitili::tilinomsitaja =omistaja;
    Pankkitili::tilinumero =tilinumero;
}

void Pankkitili::talleta(double maara)
{

    Pankkitili::saldo +=maara;
    cout << endl << "Talletettu " << maara <<"e " << " tilille " << this->tilinumero<< endl;
    cout << "Tilin saldo " << Pankkitili::saldo <<"e " << endl;
}

void Pankkitili::nosta(double maara)
{
    if(Pankkitili::saldo<maara){
        cout<< endl<< "Ei tarpeeksi rahaa"<< endl;

    }else{
        Pankkitili::saldo -=maara;
        cout << endl<< "Nostettu " << maara <<"e " << endl;
        cout << "Tilin saldo " << Pankkitili::saldo <<"e " << endl;
    }
}

void Pankkitili::tulostaTilitiedot()
{

    cout << endl<< "Tilin kayttaja " << Pankkitili::tilinomsitaja << endl;
    cout << "Tilinumero " << Pankkitili::tilinumero<< endl;
    cout << "Tilin saldo " << Pankkitili::saldo <<"e " << endl;
}

string Pankkitili::getTilinumero()
{
    cout << endl<< "Tilinumero: " << Pankkitili::tilinumero<< endl;

}

double Pankkitili::getSaldo()
{
    cout << endl<< "Saldo: " << Pankkitili::saldo<< endl;

}

bool Pankkitili::siirra(Pankkitili& tili, double maara)
{
    cout<< endl << endl << "Siirretaan tililta " << this->tilinumero << " tilille " << tili.tilinumero << endl;
    if(this->saldo> maara){
        Pankkitili::saldo-=maara;
        tili.talleta(maara);
        return true;
    }else{
        cout << "Siirto ei onnistunut " << endl;
        return false;
    }
}
