#include <iostream>
#include <test.h>
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Test t(2,3);
    for(int i=0; i<10; i++){
        int number;
        cout << "Syota luku: ";
        cin >> number;
        t.addData(number);
    }
    t.getData();
    t.printVectorMultiplication();
    t.printVectorSum();
}
