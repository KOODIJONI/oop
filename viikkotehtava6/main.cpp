#include "student.h"
#include <vector>
#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;
int main ()
{
    int selection =0;
    vector<Student>studentList;

    string search;
    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0: {
            string nimi;
            int age;
            cout <<endl << "Syötä opiskelijan nimi: ";
            cin >> nimi;

            cout <<endl << "Syötä opiskelijan ika: ";
            cin >> age;
            Student opiskelija = Student(nimi,age);
            studentList.push_back(opiskelija);

            break;
        }
        case 1:
            for (auto& student : studentList) {
                student.printStudentInfo();
            }
            break;

        case 2:
            std::sort(studentList.begin(), studentList.end(), []( const Student& lhs,  const Student& rhs) {
                    return lhs.getName() < rhs.getName();

            });
            for (auto& student : studentList) {
                student.printStudentInfo();
            }

            break;

        case 3:
            std::sort(studentList.begin(), studentList.end(), []( Student& lhs,  Student& rhs) {
                if (lhs.getAge() != rhs.getAge()) {
                    return lhs.getAge() < rhs.getAge();
                } else {
                    return lhs.getAge() > rhs.getAge();
                }
            });
            for (auto& student : studentList) {
                student.printStudentInfo();
            }

            break;
        case 4:{
            cout << "Etsi oppilasta tietokannasta   : ";
            cin >> search;
            cout << endl;
            std::vector<Student> foundStudents;

            std::copy_if (studentList.begin(), studentList.end(),back_inserter(foundStudents),[search](auto& student) { // Capture 'search' by value
                    return search == student.getName();

            });

            if(foundStudents.size()>0){
                cout <<foundStudents.size() << "opiskelijaa löydetty";
                for(auto& student : foundStudents) {
                    student.printStudentInfo();
                }
            }
                else{
                    cout <<"Ei oppilaita nimella "<< search;

                }

            break;
        }

        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }

    }while(selection < 5);
    return 0;
}




