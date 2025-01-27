#include "chef.h"

Chef::Chef(string name)
{
    this->chefName= name;
    cout <<endl << this->chefName << " construktor"<< endl;
}

Chef::~Chef()
{
    cout << this->chefName << " destruktor"<< endl;
}

string Chef::getName()
{
    return this->chefName;
}

int Chef::makeSalad(int ingredient)
{
    int count = ingredient / 5;
    if(count < 1){
        cout << "No enough ingredients" << endl;
        return 0;

    }
    else{
        cout << ingredient << " amount makes "<< count << " portions of salad"<<endl;
        return count;
    }
}
int Chef::makeSoup(int ingredient)
{
    int count = ingredient / 3;
    if(count < 1){
        cout << "No enough ingredients" << endl;
        return 0;
    }
    else{
        cout << ingredient << " makes "<< count << " portions of soup"<<endl;
        return count;
    }
}
