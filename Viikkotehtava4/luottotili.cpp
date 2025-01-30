#include "luottotili.h"

Luottotili::Luottotili(string omistaja,double luottoraja): Pankkitili(omistaja) {
    this->luottoRaja = luottoraja;
    cout << "tilin tyyppi: luottotili " <<endl << "Luottoraja: "<< this->luottoRaja <<endl<< endl;

}
bool Luottotili::deposit(double amount)
{
    if(amount>0&&amount<10000){
        this->saldo=this->saldo+amount;
        cout << "Talletettu  " <<amount <<" e" << " kayttajalle " << this->omistaja<<endl;
        return true;
    }else if(amount>10000){
        cout << "Syota pienempi summa kuin " <<saldo <<endl;
        return false;
    }else{
        cout << "Syota suurepi summa kuin " <<saldo <<endl;
        return false;
    }
    return false;
}

bool Luottotili::withdraw(double amount)
{
    if(this->saldo-amount>0-this->luottoRaja){
        this->saldo=this->saldo-amount;
        cout << "Nostettu  " <<amount <<" e Luottotililta" << " kayttajalle " << this->omistaja<<endl;
        return true;
    }else{
        cout << "Ei tarpeeksi katetta " <<endl;
        return false;
    }
    return false;
}
