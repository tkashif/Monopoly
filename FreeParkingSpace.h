//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_FREEPARKINGSPACE_H
#define MONOPOLY_FREEPARKINGSPACE_H
#include "NonBuyableSpace.h" // needed for base class
#include <iostream>

class Player; // only &'s
class GameAttributes; // only &'s

class FreeParkingSpace : public NonBuyableSpace {
 public:
  FreeParkingSpace(std::string name);

  virtual void doAction(Player& player, GameAttributes& attributes) override;

};

#endif //MONOPOLY_FREEPARKINGSPACE_H
