//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_CONTROLLER_H
#define MONOPOLY_CONTROLLER_H

#include "GameAttributes.h"


class Controller {

 public:
  Controller(GameAttributes attributes);

  void setUpGame();
  void playGame();

  bool gameIsOver() const;
  void switchPlayer(int& currentPlayerIndex, int& currentSpaceIndex);
  void displayGameStats();

 private:
  GameAttributes attributes;




};

#endif //MONOPOLY_CONTROLLER_H
