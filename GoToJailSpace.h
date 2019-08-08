//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_GOTOJAILSPACE_H
#define MONOPOLY_GOTOJAILSPACE_H
#include "NonBuyableSpace.h"
#include "Player.h"
#include "GameAttributes.h"

class GoToJailSpace : public NonBuyableSpace {
 public:
  GoToJailSpace(std::string name);

  virtual void doAction(Player& player, GameAttributes& attributes) override;
};

#endif //MONOPOLY_GOTOJAILSPACE_H
