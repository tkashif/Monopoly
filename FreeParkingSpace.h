//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_FREEPARKINGSPACE_H
#define MONOPOLY_FREEPARKINGSPACE_H
#include "NonBuyableSpace.h"
#include "Player.h"
#include "GameAttributes.h"

class FreeParkingSpace : public NonBuyableSpace {
 public:
  FreeParkingSpace(std::string name);

  virtual void doAction(Player& player, GameAttributes& attributes) override;

};

#endif //MONOPOLY_FREEPARKINGSPACE_H
