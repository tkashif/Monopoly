//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_BUYABLESPACE_H
#define MONOPOLY_BUYABLESPACE_H
#include "Space.h"
#include "Player.h"

class Player;

class BuyableSpace : public Space {
 public:
  BuyableSpace(std::string name, int price, int rent);

  virtual void displayIfOwned() override;
  virtual void displayPrice() override;
  virtual void displayRents() override;

  bool noOwner();

 protected:
  int price;
  Player owner;
  int rent;


};

#endif //MONOPOLY_BUYABLESPACE_H
