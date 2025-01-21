#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>
#include <string>
using namespace std;

class ItalianChef : public Chef
{

private:
    string password = "pizza";
    int flour;
    int water;
    int makepizza(int,int);

public:
    ItalianChef(string name);
    ~ItalianChef();
    bool askSecret(string,int,int);


};

#endif // ITALIANCHEF_H
