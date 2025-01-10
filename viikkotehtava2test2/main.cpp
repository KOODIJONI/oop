#include <iostream>
#include "game.h"
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(std::time(0)));

    int maksimi;

    cout << "Syota maksimi luku " << endl;
    cin >> maksimi;
    Game game(maksimi);
    game.play();

    return 0;
}
