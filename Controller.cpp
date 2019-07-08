//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Controller.h"

Controller::Controller(GameAttributes attributes): attributes(attributes) {

}
bool Controller::gameIsOver() const {
  return attributes->getPlayers().size() == 1;
}
void Controller::switchPlayer(int& currentPlayerIndex, int& currentSpaceIndex) {
  currentPlayerIndex++;
  if (currentPlayerIndex == attributes->getPlayers().size()){
    currentPlayerIndex = 0;
  }
  currentSpaceIndex = attributes->getPlayers()[currentPlayerIndex].getCurrentPosition();
}
void Controller::playGame() {
  int currentPlayerIndex = 0;
  int currentSpaceIndex = 0;
  while (!gameIsOver()){
    displayGameStats();
    int result = dice.roll(); // this function will also do all the displaying
    attributes->getPlayers()[currentPlayerIndex]->movePiece(result); // should update currentPlayerindex and board
    attributes->getBoard().displayCurrentState();
    attributes->getBoard()[currentSpaceIndex]->takeAction();
    if (attributes->getPlayers()[currentPlayerIndex].getBalance() <= 0){
      // REMOVE PLAYER
    }
    switchPlayer(currentPlayerIndex, currentSpaceIndex);

  }
}