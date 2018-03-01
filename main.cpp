#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  int timesPlaying; 
  int timesWon = 0; 

  cout<< "How many times do you want to play the game?\n"; 
  cin>> timesPlaying; 

  for (int i = 0 ; i < timesPlaying ; i++) 
  { 
   game.newGame() ;
   game.guessDoorC() ;
   game.guessDoorC() ; 

   if (game.isWinner() == true ) 
   { 
    timesWon++; 
   } 
  } 

 cout<< "You won " << timesWon << " times.\n"; 
  return 0;
}
