#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int gamesWon=0;
  int timesPlayed = 0;


  cout << "How many times would you like to play this game?\n";
  cin >> timesPlayed;

  for (int i = 0; i < timesPlayed; i++) 
  {
    game.newGame();
    game.guessDoorC();
    game.guessDoorC();
    if(game.isWinner())
    {
        gamesWon++;
    }
  }
cout<< gamesWon << endl;

  return 0;
}
