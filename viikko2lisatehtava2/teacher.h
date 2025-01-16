#ifndef TEACHER_H
#define TEACHER_H
#include "person.h"
#include <string>
using namespace std;
class Teacher : public Person
{
private:
    string course;
public:
    Teacher(const std::string&,const std::string&,const std::string&, const int);
    void displayInfo();

};

#endif // TEACHER_H
