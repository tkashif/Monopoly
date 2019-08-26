//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Dice.h"

std::mt19937 Dice::randomNumGenerator(time(nullptr));

int Dice::roll() {
  std::uniform_int_distribution<int> uid(1,6);
  return uid(randomNumGenerator);
}
