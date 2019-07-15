//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Player.h"

Player::Player() {
  balance = 0;
  pieceLetter = ' ';
  name = "";
  inJail = false;
  ownedProperties = {};
  currentSpaceIndex = 0;
}

Player::Player(int balance, char pieceLetter, std::string name, bool inJail): balance(balance), pieceLetter(pieceLetter), name(name), inJail(inJail) {
  ownedProperties = {};
  currentSpaceIndex = 0;
}
void Player::movePiece(int amount, GameAttributes& attributes) {
  // updates where in board vector you are on (just index)
  updateCurrentSpaceIndex(amount, attributes);
  // goes and updates currentSpaceOn from board vector
  updateCurrentSpaceOn(attributes);
}
void Player::takeTurn(GameAttributes& attributes) {

  int result;
  rollDie(result, attributes);

  movePiece(result, attributes); // should update currentPlayerindex and board

}
void Player::rollDie(int& result, GameAttributes attributes) {

  std::cout << "Press any key to roll: ";
  char input;
  std::cin >> input; // eat up input
  int resultDice1 = attributes.getDice().roll();
  std::cout << name << " rolled a " << resultDice1 << " " << std::endl;

  std::cout << "Press any key to roll: ";
  std::cin >> input; // eat up input
  int resultDice2 = attributes.getDice().roll();
  std::cout << name << " rolled a " << resultDice2 << " " << std::endl;

  result = resultDice1 + resultDice2;

  while (resultDice1 == resultDice2){

    std::cout << "Press any key to roll: ";
    char input;
    std::cin >> input; // eat up input
    int resultDice1 = attributes.getDice().roll();
    std::cout << name << " rolled a " << resultDice1 << " " << std::endl;

    std::cout << "Press any key to roll: ";
    std::cin >> input; // eat up input
    int resultDice2 = attributes.getDice().roll();
    std::cout << name << " rolled a " << resultDice2 << " " << std::endl;

    result += resultDice1 + resultDice2;
  }
}
void Player::updateCurrentSpaceIndex(int amount, GameAttributes& attributes) {
  for (int i = 0; i < amount; i++){
    // if you are at the end of the board vector, go back to the beginning (GO)
    if (atEndOfBoard(attributes)){
      currentSpaceIndex = 0;
      // **** FIGURE OUT HOW TO ADD 200 FOR PASSING GO **** - otherwise just do manually
    } else{
      currentSpaceIndex++; // increase where you are
    }
  }
}
void Player::updateCurrentSpaceOn(GameAttributes& attributes) {
  // Space * = whereever you have landed // NOT SURE IF THIS WORKS AS I AM TRYING TO COPY SPACE I AM ON TO CURRENT SPACE ON by accessing underlying dumb pointer
  currentSpaceOn = (attributes.getBoard().getSpaces()[currentSpaceIndex].get());
}
bool Player::atEndOfBoard(GameAttributes& attributes) {
  return attributes.getBoard().getSpaces().size() - 1 == currentSpaceIndex;
}
void Player::displayInfoAboutSpotLandedOn(const GameAttributes &attributes) {
   std::cout << "And here is the information about where you landed" << std::endl;

   attributes.getBoard()[currentSpaceIndex]->displayName();

  // if the space is buyable..
   BuyableSpace* buyableSpace = dynamic_cast<BuyableSpace*>(attributes.getBoard()[currentSpaceIndex].get());
   if (buyableSpace) { // if this doesn't work just add functions to space and leave empty
     buyableSpace->displayIfOwned();
     buyableSpace->displayPrice();
     buyableSpace->displayRents();

     // Previously what it was with functions declared in Space.h
     /*attributes.getBoard()[currentSpaceIndex]->displayIfOwned();
     attributes.getBoard()[currentSpaceIndex]->displayPrice();
     attributes.getBoard()[currentSpaceIndex]->displayRents();*/
   }


}
std::string Player::getName() {
  return name;
}
int Player::getNumberOfRailroadsOwned() {
  int counter = 0;

  // for each property
  for (int i = 0; i < ownedProperties.size(); i++){
    // check if the property is a railroad
    RailroadSpace* railroadPointer = dynamic_cast<RailroadSpace*>(ownedProperties[i].get());
    // if railroadpointer is not null
    if (railroadPointer){
      counter++;
    }
  }
  return counter;
}
int Player::getBalance() {
  return balance;
}
void Player::listProperties() {
  for (int i = 0; i < ownedProperties.size(); i++){
    std::cout << ownedProperties[i]->getName() << std::endl;
  }

}




