#include "game.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
void Game::printGameResult()
{
    cout << "oikein! luku on " << Game::randomNumber<<endl;

}

Game::Game(int maksimi) {
    srand(static_cast<unsigned int>(std::time(0)));
    Game::numOfGuesses=0;
    Game::randomNumber = rand()% maksimi;
    Game::maxNumber = maksimi;
}

Game::~Game()
{
    cout << "tuhotaan bjekti";
    delete Game::maxNumber;
    delete Game::playerGuess;
    delete Game::randomNumber;
    delete Game::numOfGuessas;
}

void Game::play()
{
    while(Game::playerGuess != Game::randomNumber){
        cout << "Arvaa luku 0-" << Game::maxNumber << endl;

        cin >> Game::playerGuess;
        if(Game::playerGuess == Game::randomNumber){
            Game::printGameResult();
            return;
        }
        else if(Game::playerGuess > Game::randomNumber){
            cout << "luku on pienempi" << endl;
        }
        else if(Game::playerGuess <Game::randomNumber){
            cout << "luku on suurempi" << endl;

        }
        Game::numOfGuesses++;
    }
    return;
}
