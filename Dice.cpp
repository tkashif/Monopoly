//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Dice.h"
int Dice::roll() {
  return rand() % 6 + 1;
}
