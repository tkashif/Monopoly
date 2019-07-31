//
// Created by Taimur Kashif on 2019-07-05.
//

#include "TaxSpace.h"
TaxSpace::TaxSpace(std::string name, int penalty) : NonBuyableSpace(name), penalty(penalty) {

}
void TaxSpace::doAction(Player &player, GameAttributes &attributes) {
  player.subtractFromBalance(penalty);
  attributes.getMiddle().addMoney(penalty);
}
