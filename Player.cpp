//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Player.h"
Player::Player(int balance, char pieceLetter, std::string name, bool inJail): balance(balance), pieceLetter(pieceLetter), name(name), inJail(inJail) {
  ownedProperties = {};
  currentSpaceIndex = 0;
}


