//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_NONBUYABLESPACE_H
#define MONOPOLY_NONBUYABLESPACE_H
#include "Space.h"

class NonBuyableSpace : Space {
 public:
  NonBuyableSpace(std::string name);

  virtual void displayIfOwned() override;
  virtual void displayPrice() override;
  virtual void displayRents() override;
};

#endif //MONOPOLY_NONBUYABLESPACE_H
