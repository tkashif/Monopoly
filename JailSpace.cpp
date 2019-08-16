//
// Created by Taimur Kashif on 2019-07-05.
//

#include "JailSpace.h"
#include "Player.h"

JailSpace::JailSpace(std::string name) : NonBuyableSpace(name) {

}
void JailSpace::doAction(Player &player, GameAttributes &attributes) {
  player.setInJail(false);
  player.setJustVisitingJail(true);
}
