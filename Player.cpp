//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Player.h"
#include "GameAttributes.h"
Player::Player(int balance, char pieceLetter, std::string name, bool inJail): balance(balance), pieceLetter(pieceLetter), name(name), inJail(inJail) {
  ownedProperties = {};
  currentSpaceIndex = 0;
}
void Player::movePiece(int amount) {
  // updates where in board vector you are on (just index)
  updateCurrentSpaceIndex(amount);
  // goes and updates currentSpaceOn from board vector
  updateCurrentSpaceOn();
}
void Player::takeTurn(GameAttributes gameAttributes) {

  int result;
  rollDie(result, gameAttributes);

  movePiece(result); // should update currentPlayerindex and board

}
void Player::rollDie(int& result, GameAttributes gameAttributes) {
  int resultDice1 = gameAttributes.getDice().roll();
  std::cout << name << " rolled a " <<
  int resultDice2 = gameAttributes.getDice().roll();
  result = resultDice1 + resultDice2;
  while (resultDice1 == resultDice2){
    resultDice1 = gameAttributes.getDice().roll();
    resultDice2 = gameAttributes.getDice().roll();
    result += resultDice1 + resultDice2;
  }
}
void Player::updateCurrentSpaceIndex(int amount) {
  for (int i = 0; i < amount; i++){
    // if you are at the end of the board vector, go back to the beginning (GO)
    if (atEndOfBoard()){
      currentSpaceIndex = 0;
      // **** FIGURE OUT HOW TO ADD 200 FOR PASSING GO **** - otherwise just do manually
    } else{
      currentSpaceIndex++; // increase where you are
    }
  }
}
void Player::updateCurrentSpaceOn() {
  // Space * = whereever you have landed
  currentSpaceOn = &(attributes.getBoard().getSpaceAt(currentSpaceIndex));
}


