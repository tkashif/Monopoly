//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_TAXSPACE_H
#define MONOPOLY_TAXSPACE_H
#include "NonBuyableSpace.h" // base class

class Player; // only &'s
class GameAttributes; // only &'s

class TaxSpace : public NonBuyableSpace {
 public:
  TaxSpace(std::string name, int penalty);

  virtual void doAction(Player& player, GameAttributes& attributes) override;

 protected:
  int penalty;
};

#endif //MONOPOLY_TAXSPACE_H
