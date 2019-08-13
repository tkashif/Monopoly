//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_GOSPACE_H
#define MONOPOLY_GOSPACE_H
#include "NonBuyableSpace.h" // base class
#include <iostream>

class Player; // only &'s
class GameAttributes; // only &'s

class GOSpace : public NonBuyableSpace {
 public:
  GOSpace(std::string name);

  virtual void doAction(Player& player, GameAttributes& attributes) override;

 protected:
  int benefit;
};

#endif //MONOPOLY_GOSPACE_H
