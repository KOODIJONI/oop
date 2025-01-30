#include "seuraaja.h"

Seuraaja::Seuraaja(string syotettyNimi) {
    this->nimi=syotettyNimi;

}
Seuraaja::~Seuraaja() {
    cout << this->getNimi()<< " tuhottu" << endl;

}

string Seuraaja::getNimi()
{
    return this->nimi;
}

void Seuraaja::paivitus(string teksti)
{
    cout << "Paivitus "<< teksti << " lahetetty kayttajalle: "<< this->getNimi() << endl;
}
