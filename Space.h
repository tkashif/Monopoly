//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_SPACE_H
#define MONOPOLY_SPACE_H
#include <iostream>
#include "Player.h"

class Space {
 public:
  Space(const std::string& name);

  /*attributes.getBoard()[currentSpaceIndex].displayName();
  attributes.getBoard()[currentSpaceIndex].displayIfOwned();
  attributes.getBoard()[currentSpaceIndex].displayPrice();
  attributes.getBoard()[currentSpaceIndex].displayRents();
   */

  virtual void displayName();
  virtual void doAction(Player& player, GameAttributes& attributes) = 0;

  void addOccupier(const Player& personWhoLanded);

  void removeFirstOccupier();

/*  virtual void displayIfOwned() = 0;
  virtual void displayPrice() = 0;
  virtual void displayRents() = 0; --> DONT MAKE SENSE TO HAVE HERE */

  std::string getName();

 protected:
  std::string name;
  bool occupied;
  std::vector<Player> occupiers;
  bool free;


};

#endif //MONOPOLY_SPACE_H
