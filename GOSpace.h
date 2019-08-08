//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_GOSPACE_H
#define MONOPOLY_GOSPACE_H
#include "NonBuyableSpace.h"
#include "Player.h"
#include "GameAttributes.h"

class GOSpace : public NonBuyableSpace {
 public:
  GOSpace(std::string name);

  virtual void doAction(Player& player, GameAttributes& attributes) override;

 protected:
  int benefit;
};

#endif //MONOPOLY_GOSPACE_H
