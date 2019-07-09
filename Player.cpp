//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Player.h"
Player::Player(int balance, char pieceLetter, std::string name, bool inJail): balance(balance), pieceLetter(pieceLetter), name(name), inJail(inJail) {
  ownedProperties = {};
  currentSpaceIndex = 0;
}
void Player::movePiece(int amount) {




}
void Player::takeTurn(Dice dice) {

  int result;
  int resultDice1 = attributes.getDice().roll(); // this function will also do all the displaying
  int resultDice2 = attributes.getDice().roll();
  result = resultDice1 + resultDice2;
  while (resultDice1 == resultDice2){
    resultDice1 = attributes.getDice().roll();
    resultDice2 = attributes.getDice().roll();
    result += resultDice1 + resultDice2;
  }


  movePiece(result); // should update currentPlayerindex and board

}


