#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;
class Person
{
protected:
    int age;
    string first_name;
    string last_name;


public:
    Person(string,string, int);
    ~Person();
    void displayInfo();
};

#endif // PERSON_H
