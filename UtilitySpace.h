//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_UTILITYSPACE_H
#define MONOPOLY_UTILITYSPACE_H
#include "BuyableSpace.h"

class UtilitySpace : BuyableSpace {

 public:
  UtilitySpace(std::string name, int rent, int price);

  virtual void displayRents() override;

};

#endif //MONOPOLY_UTILITYSPACE_H
