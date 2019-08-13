#include <iostream>
#include "Board.h"
#include "MiddleSpace.h"
#include "Dice.h"
#include "Controller.h"
#include "GameAttributes.h"

int askHowManyPlayers();

int main() {
  
  int numPlayers = askHowManyPlayers();

  Board board;
  Dice dice;
  MiddleSpace middle;
  GameAttributes gameAttributes(numPlayers, board, dice, middle);
  Controller controller(gameAttributes);

  controller.playGame();

  return 0;
}

int askHowManyPlayers(){
  std::cout << "Enter how many players you would like to be in game: ";
  int number;
  std::cin >> number;
  return number;
}
