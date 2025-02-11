#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;
class Student
{
public:
    Student(string, int);
    void setAge(int);
    void setName(string);
    int getAge();
    const string getName() const;
    void printStudentInfo();
private:
    int age;
    string name;


};

#endif // STUDENT_H
