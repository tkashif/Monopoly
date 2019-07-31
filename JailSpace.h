//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_JAILSPACE_H
#define MONOPOLY_JAILSPACE_H
#include "NonBuyableSpace.h"

class JailSpace : public NonBuyableSpace{
 public:
  JailSpace(std::string name);

  virtual void doAction(Player& player, GameAttributes& attributes) override;
};

#endif //MONOPOLY_JAILSPACE_H
