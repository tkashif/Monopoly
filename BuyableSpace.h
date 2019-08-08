//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_BUYABLESPACE_H
#define MONOPOLY_BUYABLESPACE_H
#include "Player.h"
#include "Space.h"
#include "GameAttributes.h"

class Player;

class BuyableSpace : public Space {
 public:

  BuyableSpace() = default;

  BuyableSpace(std::string name, int price, int rent);

  void displayIfOwned();
  void displayPrice();
  virtual void displayRents();

  virtual void doAction(Player& player, GameAttributes& attributes) override;

  bool noOwner();
  virtual void promptIfWantToBuy(char& decision);
  virtual void assignOwner(Player& player);
  virtual void displayOwnedProperties();

  Player& getOwner() const;
  virtual int getRent() const;

  virtual ~BuyableSpace() = default;


 protected:
  int price;
  Player& owner;
  int rent;


};

#endif //MONOPOLY_BUYABLESPACE_H
