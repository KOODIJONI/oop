#include "student.h"

Student::Student(string studentName, int studentAge) {
    this->setName(studentName);
    this->setAge(studentAge);
}

void Student::setAge(int studentAge)
{
    this->age = studentAge;
}

void Student::setName(string studentName)
{
    this->name = studentName;
}

int Student::getAge()
{
    return this->age;
}

const string Student::getName()const
{
    return this->name;
}

void Student::printStudentInfo()
{
    cout << endl << "Opiskelijan nimi on " << this->getName() << endl;
    cout  << "Opiskelijan ika on " << this->getAge() << endl;


}
