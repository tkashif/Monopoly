//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Player.h"
Player::Player(int balance, char pieceLetter, std::string name): balance(balance), pieceLetter(pieceLetter), name(name) {
  ownedProperties = {};
  currentSpaceIndex = 0;
}


