#include "student.h"
#include <numeric>
#include <vector>
#include <cctype>
Student::Student(const std::string& firstName, const std::string& lastName, int age, const std::string& id)
    : Person(firstName, lastName,age) {
    this->studentID=id;
    cout << "student";

}

void Student::addGrade(int grade)
{
    Student::grades.push_back(grade);
}

double Student::calculateAverage()
{
    double value =1.0 * std::accumulate(Student::grades.begin(), Student::grades.end(), 0LL) / Student::grades.size();
    if (value >= 0 && value <= 5) {
        return value;
    } else {
        return 0;
    }
}

void Student::displayInfo()
{

    cout << endl;
    Person::displayInfo();
    cout <<endl << "Opiskelija ID: "<< Student::studentID<< endl;
    cout << "Arvosanat: ";
    for(auto grade : Student::grades){
        cout << " ";
        cout << grade;
    }
    cout << endl << "Keskiarvo: " << this->calculateAverage();
}

