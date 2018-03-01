#include "SecretDoor/SecretDoor.h"

#include <iostream>

using namespace std;

int main()
{
        SecretDoor game;
        int games, wins;


        cout<< "How many games do you want to play? \n"; 
        cin>> games;

        for( int i = 0; i < games; i++)
        {   
                game.newGame();
                game.guessDoorC();
                game.guessDoorC();
                game.isWinner();
                if (game.isWinner())
                { 
                        wins ++;


                }
        }       

        cout<< "you have a total of "<<wins<<" wins. \n";







        return 0;
}
