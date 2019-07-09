//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_PLAYER_H
#define MONOPOLY_PLAYER_H
#include <iostream>
#include "BuyableSpace.h"
#include "Dice.h"
#include "GameAttributes.h"

class Player {
 public:
  Player(int balance, char pieceLetter, std::string name, bool inJail);

  void takeTurn(Dice dice);
  void movePiece(int amount);
  void rollDie(int& result, GameAttributes gameAttributes);

  void updateCurrentSpaceIndex(int amount);
  void updateCurrentSpaceOn();

 private:
  int balance;
  char pieceLetter;
  std::vector<std::unique_ptr<BuyableSpace>> ownedProperties;
  std::string name;
  int currentSpaceIndex; // i.e. position on board
  Space* currentSpaceOn;
  bool inJail;


};

#endif //MONOPOLY_PLAYER_H
