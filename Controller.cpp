//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Controller.h"
#include "GameAttributes.h" // need to dereference
#include "Board.h" // need to dereference
#include "Player.h" // need to dereference
#include "Space.h"

Controller::Controller(GameAttributes& attributes): attributes(attributes) {

}
bool Controller::gameIsOver(){
  return attributes.getPlayers().size() == 1;
}
void Controller::switchPlayer(int& currentPlayerIndex, int& currentSpaceIndex) {
  currentPlayerIndex++;
  if (currentPlayerIndex == attributes.getPlayers().size()){
    currentPlayerIndex = 0;
  }
  currentSpaceIndex = attributes.getPlayers()[currentPlayerIndex]->getCurrentPosition();
}
void Controller::playGame() {
  int currentPlayerIndex = 0;
  int currentSpaceIndex = 0;

  // put everyone on GO
  placePlayersOnGO();

  while (!gameIsOver()){

    displayWhosTurn(currentPlayerIndex);

    displayGameStats();

    attributes.getPlayers()[currentPlayerIndex]->promptAboutPlacingHouses();

    attributes.getPlayers()[currentPlayerIndex]->takeTurn(attributes);

    attributes.getBoard().displayCurrentState();

    attributes.getPlayers()[currentPlayerIndex]->displayInfoAboutSpotLandedOn(attributes);

    attributes.getPlayers()[currentPlayerIndex]->takeAction(attributes);

    //attributes.getBoard()[currentSpaceIndex]->takeAction(); ignore

    if (attributes.getPlayers()[currentPlayerIndex]->getBalance() <= 0){
      removePlayer(*(attributes.getPlayers()[currentPlayerIndex]));
    }
    switchPlayer(currentPlayerIndex, currentSpaceIndex);

    displayTurnSeperator();

  }
}

void Controller::displayGameStats() {
  for (int i = 0; i < attributes.getPlayers().size(); i++){
    // if the current player owns nothing
    std::cout << attributes.getPlayers()[i]->getName() << " owns ";
    if (attributes.getPlayers()[i]->getOwnedProperties().empty()){
      std::cout << "nothing";
    } else {
      attributes.getPlayers()[i]->listProperties();
    }
    std::cout << " and has balance " << attributes.getPlayers()[i]->getBalance() << std::endl << std::endl;
  }
}
void Controller::placePlayersOnGO() {
  for (int i = 0; i < attributes.getPlayers().size(); i++){
    // at index 0 of spaces is GO
    // add each player to GO
    attributes.getBoard().getSpaces()[0]->addOccupier(*(attributes.getPlayers()[i]));
    // for each player, set their space to GO
    attributes.getPlayers()[i]->setSpace(attributes.getBoard().getSpaces()[0].get(), 0);
  }
}
void Controller::removePlayer(Player &player) {
  auto itr = attributes.getPlayers().begin();
  for (; itr < attributes.getPlayers().end(); itr++){
    if (*itr == &player){
      attributes.getPlayers().erase(itr);
    }
  }
}
void Controller::displayTurnSeperator() {
  std::cout << "------------------------------------------------------------------------" << std::endl << std::endl;
}
void Controller::displayWhosTurn(const int& currentPlayerIndex) {
  std::cout << "It is " << attributes.getPlayers()[currentPlayerIndex]->getName() << "'s turn!" << std::endl << std::endl;
}
