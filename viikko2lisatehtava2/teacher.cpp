#include "teacher.h"

Teacher::Teacher(const std::string& firstname,const std::string& lastname,const std::string& courses, const int age) : Person(firstname, lastname,age) {
    this->course = courses;
}

void Teacher::displayInfo()
{
    Person::displayInfo();
    cout << endl<< "Kurssin "<<this->course << " opettaja "<< endl<< endl;
}
