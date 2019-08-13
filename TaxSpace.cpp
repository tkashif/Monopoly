//
// Created by Taimur Kashif on 2019-07-05.
//

#include "TaxSpace.h"
#include "Player.h" // need full type
#include "GameAttributes.h" // need full type
#include "MiddleSpace.h" // need full type

TaxSpace::TaxSpace(std::string name, int penalty) : NonBuyableSpace(name), penalty(penalty) {

}
void TaxSpace::doAction(Player &player, GameAttributes &attributes) {
  player.subtractFromBalance(penalty);
  attributes.getMiddle().addMoney(penalty);
}
