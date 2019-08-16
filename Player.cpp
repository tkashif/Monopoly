//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Player.h"
#include "GameAttributes.h" // need full type
#include "Dice.h" // need full type
#include "Board.h" // need full type
#include "BuyableSpace.h" // need full type
#include "RailroadSpace.h" // need full type
#include "PropertySpace.h" // need full type
#include "Space.h" // need full type for .size()

/*
 * class GameAttributes; // only &'s
class PropertySpace; // only &'s
class Space; // only &'s and *'s
class BuyableSpace; // only &'s
 */

/*Player::Player() : balance(0), pieceLetter(), name(""), inJail(false), ownedProperties({}) currentSpaceIndex(0) {
  balance = 0;
  pieceLetter = ' ';
  name = "";
  inJail = false;
  ownedProperties = {};
  currentSpaceIndex = 0;
}*/

Player::Player(int balance, char pieceLetter, std::string name, bool inJail): balance(balance), pieceLetter(pieceLetter), name(name), inJail(inJail),
                                                                              currentSpaceIndex(0), turnsInJail(0){
  //ownedProperties = {};
}
void Player::movePiece(int amount, GameAttributes& attributes) {
  // will take out player from occupied players on space (ALWAYS HAVE TO REMOVE FIRST ONE AS THEY WILL BE FIRST TO GO)
  removePieceFromCurrentSpot(attributes);
  // updates where in board vector you are on (just index)
  updateCurrentSpaceIndex(amount, attributes);
  // goes and updates currentSpaceOn from board vector
  updateCurrentSpaceOn(attributes);
}
void Player::takeTurn(GameAttributes& attributes) {
  int rolledDoubleCount = 0;
  int result;

  while (true){
    bool rolledDouble = rollDie(result, attributes);
    // if you rolled a double, increase the rolled double count
    if (rolledDouble){
      rolledDoubleCount++;
      if (rolledDoubleCount < 3){
        movePiece(result, attributes);
      } else { // if the rolled double count is not less than 3, move the piece to jail
        movePieceTo(attributes.getJailIndex(), attributes);
        setInJail(true);
        break;
      }
    } else{ // you have not rolled a double
      if (!inJail) { // if not in jail
        movePiece(result, attributes); // move your piece
      }
      break; // exit
    }

  }


  /*(bool rolledDouble = rollDie(result, attributes);

  // if the player is in jail and rolled a double, move the piece OR if the player is not in jail, move the piece
  if (!inJail || (inJail && rolledDouble)){
    movePiece(result, attributes);
  }

  // as long as they keep rolling double keep turn going. Once they roll 3 doubles, put them in jail.
  while (rolledDouble){
    rolledDoubleCount++; // increase how many times you rolled double
    rollDie(result, attributes);
    movePiece(result, attributes); // should update currentPlayerindex and board (NOTE: will also add player to spot they are moving to)
  } */


}
bool Player::rollDie(int& result, GameAttributes& attributes) {

  std::cout << "Press any key to roll: ";
  char input;
  std::cin >> input; // eat up input
  int resultDice1 = attributes.getDice().roll();
  std::cout << name << " rolled a " << resultDice1 << " " << std::endl << std::endl;

  std::cout << "Press any key to roll: ";
  std::cin >> input; // eat up input
  int resultDice2 = attributes.getDice().roll();
  std::cout << name << " rolled a " << resultDice2 << " " << std::endl << std::endl;

  result = resultDice1 + resultDice2;
  bool rolledDouble = (resultDice1 == resultDice2);

  /*while (resultDice1 == resultDice2) {

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
    }*/
  return rolledDouble;
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

  // update so that the space knows which player is on (add to occupiers vector)
  attributes.getBoard().getSpaces()[currentSpaceIndex]->addOccupier(*this);
}
bool Player::atEndOfBoard(GameAttributes& attributes) {
  return attributes.getBoard().getSpaces().size() - 1 == currentSpaceIndex;
}
void Player::displayInfoAboutSpotLandedOn(GameAttributes &attributes) {
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
  std::cout << std::endl;


}
std::string Player::getName() {
  return name;
}
int Player::getNumberOfRailroadsOwned() {
  int counter = 0;

  // for each property
  for (int i = 0; i < ownedProperties.size(); i++){
    // check if the property is a railroad
    RailroadSpace* railroadPointer = dynamic_cast<RailroadSpace*>(ownedProperties[i]);
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
    std::cout << (ownedProperties)[i]->getName() << std::endl;
  }

}
int Player::getCurrentPosition() {
  return currentSpaceIndex;
}
void Player::takeAction(GameAttributes& attributes) {
  currentSpaceOn->doAction(*this, attributes); // passing in player in case I need to do something with player
}
void Player::removePieceFromCurrentSpot(GameAttributes& attributes) {
  attributes.getBoard().getSpaces()[currentSpaceIndex]->removeFirstOccupier();
}
void Player::setSpace(Space *space, int indexOfSpace) {
  currentSpaceOn= space;
  currentSpaceIndex = indexOfSpace;
}
void Player::addOwnedProperty(BuyableSpace &space) {
  ownedProperties.emplace_back(&space); // not sure about this...
}
void Player::payOwner(const BuyableSpace &space) {
  space.getOwner()->addToBalance(space.getRent());
  this->subtractFromBalance(space.getRent());
}
void Player::addToBalance(int amount) {
  balance += amount;
}
void Player::subtractFromBalance(int amount) {
  balance -= amount;
}
void Player::promptAboutPlacingHouses() {
  std::vector<PropertySpace> options = {};

  for (int i = 0; i < ownedProperties.size(); i++){
    // cast to a property space
    PropertySpace* property = dynamic_cast<PropertySpace*>(ownedProperties[i]);
    // if space is a property space
    if (property){
      options.push_back(*property);
    }
  }
  if (!options.empty()){
    std::cout << "Would you like to place house(s)/hotel on one of the following?:" << std::endl;
  }
  //for (int i = 0; i < options.size(); i++){
    listHouseOptions(options);
  //}
  if (!options.empty()) {
    selectWhichOnesToPlaceHouses(options);
  }
}
void Player::listHouseOptions(std::vector<PropertySpace>& options) {
  for (int i = 0; i < options.size(); i++){
    std::cout << (i + 1) << ". " << options[i].getName() << std::endl;
  }
}
void Player::selectWhichOnesToPlaceHouses(std::vector<PropertySpace> &options) {
  std::cout << "Enter the number of the property for which you would like to place house(s) / a hotel (enter -1 to exit): ";
  int input;
  std::cin >> input;

  while (input != -1){
    if (input >= 1 && input <= options.size()){
      placeHousesOrHotelOnProperty(options[input - 1]);
    }
    std::cout << "Enter the number of the property for which you would like to place house(s) / a hotel (enter -1 to exit): ";
    std::cin >> input;
  }

}
void Player::placeHousesOrHotelOnProperty(PropertySpace& property) {
  bool houseDesired;
  getInputAboutHouseDesired(houseDesired);
  if(houseDesired){
    int numberOfHousesDesired;
    getInputAboutHowManyHousesDesired(numberOfHousesDesired);
    placeHousesOnProperty(property, numberOfHousesDesired);
  } else {
    if(canAffordHotel()){
      placeHotelOnPropertyAndGetRidOfHouses(property);
    }
  }
}
void Player::getInputAboutHouseDesired(bool& houseDesired) {
  std::cout << "Do you want to place a house (enter h) or a hotel (enter H):";
  char input;
  std::cin >> input;
  if (input == 'h'){
    houseDesired = true;
  } else if (input == 'H'){
    houseDesired = false;
  }
}
void Player::getInputAboutHowManyHousesDesired(int &numberOfHousesDesired) {
  std::cout << "With your balance of " << this->getBalance() << ", you can currently afford: " << getAffordableNumberOfHouses();

  /*int numberOfAffordableHouses;
  getAffordableNumberOfHouses(numberOfAffordableHouses);*/

  std::cout << "How many houses would you like to have? ";
  int input;
  std::cin >> input;

  while (input > getAffordableNumberOfHouses()){
    std::cout << "Sorry, you cannot afford that." << std::endl;
    std::cout << "How many houses would you like to have? ";
    std::cin >> input;
  }

  numberOfHousesDesired = input;

}
int Player::getAffordableNumberOfHouses() {
  return this->getBalance() / 200;
}
void Player::placeHousesOnProperty(PropertySpace &property, int numberOfHousesDesired) {
  property.addHouses(numberOfHousesDesired);
}
void Player::placeHotelOnPropertyAndGetRidOfHouses(PropertySpace &property) {
  property.addHotel();
  property.setHouses(0);
}
bool Player::canAffordHotel() {
  return (this->getBalance() / 1000 > 0);
}
bool Player::operator==(Player &player) {

  /*int balance;
  char pieceLetter;
  std::vector<std::unique_ptr<BuyableSpace>> ownedProperties;
  std::string name;
  int currentSpaceIndex; // i.e. position on board
  Space* currentSpaceOn;
  bool inJail;*/
  return (balance == player.getBalance()) && (pieceLetter == player.getPieceLetter()) && (ownedProperties == player.getOwnedProperties())
          && (name == player.getName()) && (currentSpaceIndex == player.getCurrentSpaceIndex());
}
char Player::getPieceLetter() {
  return pieceLetter;
}
std::vector<BuyableSpace*>& Player::getOwnedProperties() {
  return ownedProperties;
}
int Player::getCurrentSpaceIndex() {
  return currentSpaceIndex;
}
void Player::setCurrentSpace(GameAttributes& attributes) {
  currentSpaceIndex = attributes.getJailIndex();
  currentSpaceOn = attributes.getBoard()[currentSpaceIndex].get();
}
void Player::setInJail(bool ifInJail) {
  inJail = ifInJail;
}
void Player::payBank(int amount) {
  balance-=amount;
}
void Player::increaseTurnsInJail() {
  turnsInJail++;
}
void Player::movePieceTo(int index, GameAttributes& attributes) {
  currentSpaceIndex = index;
  currentSpaceOn = attributes.getBoard()[currentSpaceIndex].get();
}
void Player::setJustVisitingJail(bool justVisiting) {
  justVisitingJail = justVisiting;
}










