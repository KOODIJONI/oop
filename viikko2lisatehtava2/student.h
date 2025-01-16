#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include <vector>
#include <string>
#include <iostream>
using namespace std;
class Student : public Person
{
private:
    string studentID;
    std::vector<int> grades;
public:
    Student(const std::string&,const std::string&, const int,const std::string&);
    void addGrade(int);
    double calculateAverage(void);
    void displayInfo(void);
};

#endif // STUDENT_H
