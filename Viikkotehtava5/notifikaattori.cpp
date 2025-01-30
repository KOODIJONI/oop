#include "notifikaattori.h"

Notifikaattori::Notifikaattori() {
    cout << "luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja * pointteri)
{
    if(this->seuraajat == nullptr){
        cout << "Lisataa seuraaja " << pointteri->getNimi() << endl << endl;
        this->seuraajat =pointteri;
    }else{
        cout << "Lisataa seuraaja " << pointteri->getNimi() << endl << endl;
        pointteri->next=this->seuraajat;
        this->seuraajat=pointteri;
    }

}

void Notifikaattori::poista(Seuraaja *poistettava)
{
    Seuraaja* current = this->seuraajat;

    if(current==nullptr){
        cout << "Ei seuraajia";
        return;
    }
    while (current != nullptr) {
        if(current->next == poistettava){
            cout << "Poistetaan notifkaattorin seuraajista kayttaja: "<< current->next->getNimi() << endl;
            current->next = current->next->next;

            cout << endl;
            return;
        }


        current = current->next;

    }
    cout << "Kayttajaa " << poistettava->getNimi() << " ei ollut seuraajssa" << endl;
      cout << endl;
}

void Notifikaattori::tulosta()
{
    cout << "Notifikaattorin seuraajat: "<< endl;

    Seuraaja* current = this->seuraajat;
    if(current==nullptr){
        cout << "Ei seuraajia";
        return;
    }

    while (current != nullptr) {
        cout << current->getNimi()<< endl;
        current = current->next;
    }
      cout << endl;
}

void Notifikaattori::postita(string teksti)
{
    cout << "Notifikaattori postaa viestin " << teksti << endl;
    Seuraaja* current = this->seuraajat;
    if(current==nullptr){
        cout << "Ei seuraajia"<< endl << endl;
        return;
    }

    while (current != nullptr) {
        current->paivitus(teksti);
        current = current->next;
    }
    cout << endl;
}
