//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_PLAYER_H
#define MONOPOLY_PLAYER_H
#include <iostream>
#include "BuyableSpace.h"
#include "Dice.h"
#include "GameAttributes.h"

class BuyableSpace;

class Player {
 public:

  Player();

  Player(int balance, char pieceLetter, std::string name, bool inJail);

  void takeTurn(GameAttributes& attributes);
  void movePiece(int amount, GameAttributes& attributes);
  void rollDie(int& result, GameAttributes gameAttributes);

  void updateCurrentSpaceIndex(int amount, GameAttributes& attributes);
  void updateCurrentSpaceOn(GameAttributes& attributes);
  void removePieceFromCurrentSpot(GameAttributes& attributes);

  bool atEndOfBoard(GameAttributes& attributes);

  void displayInfoAboutSpotLandedOn(const GameAttributes& attributes);
  void takeAction();

  int getCurrentPosition();
  std::string getName();
  int getNumberOfRailroadsOwned();
  int getBalance();
  void listProperties();
  void setSpace(Space* space, int indexOfSpace);



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
