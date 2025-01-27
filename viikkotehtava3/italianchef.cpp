#include "italianchef.h"
#include <iostream>
#include <string>
ItalianChef::ItalianChef(string name): Chef(name) {

    this->chefName= name;
}

ItalianChef::~ItalianChef()
{

}

bool ItalianChef::askSecret(string sercetPassword, int ingredient1, int ingredient2)
{

    if(this->password.compare(sercetPassword)==0){

        this->makepizza(ingredient1,ingredient2);
        return true;
    }
    else{
        cout << "no password" << endl;
        return false;
    }
}
int ItalianChef::makepizza(int ingredient1, int ingredient2)
{
    if(ingredient1>4&&ingredient2>4){
        const int minimum = min(ingredient1,ingredient1);
        int count = minimum / 5;
        cout << count << " pizzas created using " << ingredient1 << "kg flour and " << ingredient2 << "l water "<<endl;
        return count;
    }else{
        cout << "no ingredients";
        return 0;
    }
}

