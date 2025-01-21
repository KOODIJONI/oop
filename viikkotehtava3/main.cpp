#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{
    Chef chef1("Chef Gordon");
    chef1.makeSalad(11);
    chef1.makeSoup(14);

    ItalianChef chef2("Chef Mario");
    chef2.makeSalad(9);
    chef2.askSecret("pizza",12,12);

    return 0;

}
