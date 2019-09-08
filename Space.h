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

  virtual ~Space() = default;

  virtual void displayName();
  virtual void doAction(Player& player, GameAttributes& attributes) = 0;

  void addOccupier(Player& personWhoLanded);

  void removeFirstOccupier();
  void removeOccupier(Player* playerToBeRemoved);

  bool hasOccupier();

  Player& getOccupier();

  std::string getName();

 protected:
  std::string name;
  std::vector<Player*> occupiers;


};

#endif //MONOPOLY_SPACE_H
