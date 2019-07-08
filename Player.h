//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_PLAYER_H
#define MONOPOLY_PLAYER_H
#include <iostream>
#include "BuyableSpace.h"

class Player {
 public:
  Player(int balance, char pieceLetter, std::string name, bool inJail);

 private:
  int balance;
  char pieceLetter;
  std::vector<std::unique_ptr<BuyableSpace>> ownedProperties;
  std::string name;
  int currentSpaceIndex; // i.e. position on board
  bool inJail;


};

#endif //MONOPOLY_PLAYER_H
