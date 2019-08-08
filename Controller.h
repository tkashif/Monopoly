//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_CONTROLLER_H
#define MONOPOLY_CONTROLLER_H
#include "GameAttributes.h"
#include "Player.h"

class Controller {

 public:
  Controller(GameAttributes attributes);

  void setUpGame();
  void playGame();

  bool gameIsOver();
  void switchPlayer(int& currentPlayerIndex, int& currentSpaceIndex);
  void displayGameStats();
  void placePlayersOnGO();
  void removePlayer(Player& player);

 private:
  GameAttributes attributes;




};

#endif //MONOPOLY_CONTROLLER_H
