
#include "asiakas.h"
#include "pankkitili.h"
Asiakas::Asiakas(string nimi, double luottoraja) {

    this->nimi = nimi;
    this->tili = new Pankkitili(nimi);
    cout << endl;
    this->luottoTili = new Luottotili(nimi,luottoraja);
}

string Asiakas::getNimi()
{
    return this->nimi;
}

void Asiakas::showSaldo()
{
    cout <<endl<< "Kayttajan " << this->nimi <<" saldo" <<endl;
    cout << "Pankkitili: "<< this->tili->getBalance()<< "e" << endl;
    cout << "luottotili: "<< this->luottoTili->getBalance()<< "e" << endl;

}

bool Asiakas::talletus(double amount)
{
    return this->tili->deposit(amount);
}

bool Asiakas::nosto(double amount)
{
    return this->tili->withdraw(amount);
}

bool Asiakas::luotonMaksu(double amount)
{
    return this->luottoTili->deposit(amount);
}

bool Asiakas::luotonNosto(double amount)
{
    return this->luottoTili->withdraw(amount);
}
bool Asiakas::tilisiirto(double Amount,Asiakas& kohde){

    bool onnistuiko = this->nosto(Amount);
    if(!onnistuiko){
        cout << "Siirto epäonnistui "<< this->getNimi() << "tilille";
        return onnistuiko;
    }
    else{
        kohde.talletus(Amount);
        return onnistuiko;
    }

}
