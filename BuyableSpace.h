//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_BUYABLESPACE_H
#define MONOPOLY_BUYABLESPACE_H
#include "Space.h" // need because base class

class GameAttributes; // only &'s
class Player; // only &'s

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

  Player* getOwner() const;
  virtual int getRent() const;
  int getPrice() const;

  virtual ~BuyableSpace() = default;



 protected:
  int price;
  Player* owner;
  int rent;

  bool landedPlayerCanAffordThis(Player &player);
};

#endif //MONOPOLY_BUYABLESPACE_H
