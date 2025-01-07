#include <QCoreApplication>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int game(int maximum);
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    srand(static_cast<unsigned int>(std::time(0)));
    int maksimi;
    cout << "Syota maksimi luku " << endl;

    cin >> maksimi;
    cout << "arvasit " << game(maksimi) << " kertaa";



    return a.exec();
}
int game(int maximum){

    int arvaukset=0;
    int input;
    int randomNumber = rand()% maximum;

    while(input != randomNumber){
        cout << "Arvaa luku 0-" << maximum << endl;

        cin >> input;
        if(input == randomNumber){
            cout << "oikein! luku on " << randomNumber<<endl;
            return arvaukset;
        }
        else if(input > randomNumber){
            cout << "luku on pienempi" << endl;
        }
        else if(input <randomNumber){
            cout << "luku on suurempi" << endl;

        }
        arvaukset++;
    }
    return arvaukset;
}
