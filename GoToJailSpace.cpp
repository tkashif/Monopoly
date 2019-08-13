//
// Created by Taimur Kashif on 2019-07-05.
//

#include "GoToJailSpace.h"
#include "Player.h"

GoToJailSpace::GoToJailSpace(std::string name) : NonBuyableSpace(name) {

}
void GoToJailSpace::doAction(Player &player, GameAttributes &attributes) {
  player.setCurrentSpace(attributes);
}
