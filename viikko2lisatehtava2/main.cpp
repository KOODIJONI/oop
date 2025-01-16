#include <iostream>
#include "student.h"
#include "teacher.h"
using namespace std;

int main()
{
    Student s("joni", "mayra", 20,"1234");
    s.displayInfo();

    s.addGrade(5);
    s.addGrade(5);
    s.addGrade(5);
    s.addGrade(5);
    s.addGrade(4);
    s.displayInfo();

    Teacher t("Kari","Jyrkka", "Olio ohjelmointi", 0);
    t.displayInfo();

    Student s2("Roosa", "Luoma", 19,"1355");
    s2.displayInfo();

    s2.addGrade(2);
    s2.addGrade(3);
    s2.addGrade(4);
    s2.addGrade(5);
    s2.addGrade(5);
    s2.displayInfo();

    return 0;
}
