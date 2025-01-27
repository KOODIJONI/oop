#include "pankkitili.h"

Pankkitili::Pankkitili(string omistajaNimi)
{

    this->omistaja = omistajaNimi;
    cout << "Luotu pankkitili kauttajalle  "<< this->omistaja << endl;


}

double Pankkitili::getBalance()
{
    return this->saldo;
}

bool Pankkitili::deposit(double amount)
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

bool Pankkitili::withdraw(double amount)
{
    if(this->saldo-amount>0){
        this->saldo=this->saldo-amount;
        cout << "Nostettu  " <<amount <<" e" << " kayttajalle " << this->omistaja<<endl;
        return true;
    }else{
        cout << "Ei tarpeeksi katetta " <<endl;
        return false;
    }
    return false;
}
