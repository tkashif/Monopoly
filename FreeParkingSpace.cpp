//
// Created by Taimur Kashif on 2019-07-05.
//

#include "FreeParkingSpace.h"
#include "Player.h"
#include "GameAttributes.h"
#include "MiddleSpace.h"

FreeParkingSpace::FreeParkingSpace(std::string name) : NonBuyableSpace(name) {
}
void FreeParkingSpace::doAction(Player &player, GameAttributes& attributes) {
  player.addToBalance(attributes.getMiddle().getMoney());
  attributes.getMiddle().resetMoneyToZero();
}
