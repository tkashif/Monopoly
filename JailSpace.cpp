//
// Created by Taimur Kashif on 2019-07-05.
//

#include "JailSpace.h"
JailSpace::JailSpace(std::string name) : NonBuyableSpace(name) {

}
void JailSpace::doAction(Player &player, GameAttributes &attributes) {
  player.setInJail(true);
}
