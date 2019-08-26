//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_DICE_H
#define MONOPOLY_DICE_H
#include <cstdlib>
#include <iostream>
#include <random>

class Dice {
 public:
  static std::mt19937 randomNumGenerator;

  Dice() = default;

  int roll();

};

#endif //MONOPOLY_DICE_H
