//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_RAILROADSPACE_H
#define MONOPOLY_RAILROADSPACE_H
#include <iostream>
#include "BuyableSpace.h"

class RailroadSpace : BuyableSpace {
 public:
  RailroadSpace(std::string name, int price);

  virtual void displayRents() override;
};

#endif //MONOPOLY_RAILROADSPACE_H
