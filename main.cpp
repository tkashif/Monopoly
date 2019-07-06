#include <iostream>
#include "Controller.h"
#include "GameAttributes.h"

int askHowManyPlayers();

int main() {
  int numPlayers = askHowManyPlayers();
  View view;
  Board board;
  Dice dice;
  GameAttributes gameAttributes(numPlayers, view, board, dice);
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