#include <iostream>
#include "notifikaattori.h"
#include "seuraaja.h"
using namespace std;

int main()
{

    Notifikaattori n = Notifikaattori();

    Seuraaja j = Seuraaja("joni");
    Seuraaja a = Seuraaja("a");
    Seuraaja b = Seuraaja("b");
    Seuraaja c= Seuraaja("c");

    Seuraaja d = Seuraaja("d");



    n.lisaa(&j);
    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.postita("test");
    n.tulosta();
    n.poista(&a);
    n.poista(&d);
    n.tulosta();


    return 0;



}
