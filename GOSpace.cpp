//
// Created by Taimur Kashif on 2019-07-05.
//

#include "GOSpace.h"
#include "Player.h"

GOSpace::GOSpace(std::string name) : NonBuyableSpace(name) {
  benefit = 200;
}
void GOSpace::doAction(Player &player, GameAttributes &attributes) {
  player.addToBalance(benefit);
}

