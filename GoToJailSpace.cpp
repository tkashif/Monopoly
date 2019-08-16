//
// Created by Taimur Kashif on 2019-07-05.
//

#include "GoToJailSpace.h"
#include "Player.h"
#include "GameAttributes.h"

GoToJailSpace::GoToJailSpace(std::string name) : NonBuyableSpace(name) {

}
void GoToJailSpace::doAction(Player &player, GameAttributes &attributes) {
  player.movePieceTo(attributes.getJailIndex(), attributes);
  player.setInJail(true);
}
