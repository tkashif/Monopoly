//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_BUYABLESPACE_H
#define MONOPOLY_BUYABLESPACE_H
#include "Space.h"
#include "Player.h"

class BuyableSpace : Space {
 public:
  BuyableSpace(std::string name, int price, int rent);

 protected:
  int price;
  Player owner;
  int rent;


};

#endif //MONOPOLY_BUYABLESPACE_H
