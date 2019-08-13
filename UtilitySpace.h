//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_UTILITYSPACE_H
#define MONOPOLY_UTILITYSPACE_H
#include "BuyableSpace.h" // base class
#include <iostream>

class UtilitySpace : public BuyableSpace {

 public:

  UtilitySpace() = default;

  UtilitySpace(std::string name, int rent, int price);

  virtual void displayRents() override;

};

#endif //MONOPOLY_UTILITYSPACE_H
