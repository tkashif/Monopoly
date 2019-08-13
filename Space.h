//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_SPACE_H
#define MONOPOLY_SPACE_H
#include <iostream>
#include <vector>

class Player; // only &'s
class GameAttributes; // only &'s

class Space {
 public:

  Space() = default;

  Space(const std::string& name);

  /*attributes.getBoard()[currentSpaceIndex].displayName();
  attributes.getBoard()[currentSpaceIndex].displayIfOwned();
  attributes.getBoard()[currentSpaceIndex].displayPrice();
  attributes.getBoard()[currentSpaceIndex].displayRents();
   */

  virtual ~Space() = default;

  virtual void displayName();
  virtual void doAction(Player& player, GameAttributes& attributes) = 0;

  void addOccupier(const Player& personWhoLanded);

  void removeFirstOccupier();

  bool hasOccupier();

  Player& getOccupier();

/*  virtual void displayIfOwned() = 0;
  virtual void displayPrice() = 0;
  virtual void displayRents() = 0; --> DONT MAKE SENSE TO HAVE HERE */

  std::string getName();

 protected:
  std::string name;
  std::vector<Player&> occupiers;


};

#endif //MONOPOLY_SPACE_H
