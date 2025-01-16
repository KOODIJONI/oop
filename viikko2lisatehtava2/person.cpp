#include "person.h"

Person::Person(string first_name_of_person, string last_name_of_person, int ika) {

    this->first_name = first_name_of_person;
    this->last_name = last_name_of_person;
    this->age = ika;
    Person::displayInfo();
}
Person::~Person() {

}

void Person::displayInfo()
{
    cout<< endl <<endl << "Nimi: " << this->first_name << " "<< this->last_name << endl << "Ika: " << this->age ;
}
