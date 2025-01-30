#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>
#include <string>
using namespace std;
class Seuraaja
{
public:
    Seuraaja(string);
    ~Seuraaja();
    string getNimi();
    void paivitus(string);
    Seuraaja* next = nullptr;
private:
    string nimi;
};

#endif // SEURAAJA_H
