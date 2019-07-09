//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_PLAYER_H
#define MONOPOLY_PLAYER_H
#include <iostream>
#include "BuyableSpace.h"
#include "Dice.h"

class Player {
 public:
  Player(int balance, char pieceLetter, std::string name, bool inJail);

  void takeTurn(Dice dice);
  void movePiece(int amount);

 private:
  int balance;
  char pieceLetter;
  std::vector<std::unique_ptr<BuyableSpace>> ownedProperties;
  std::string name;
  int currentSpaceIndex; // i.e. position on board
  bool inJail;


};

#endif //MONOPOLY_PLAYER_H
