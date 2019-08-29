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
#include "GOSpace.h"
#include "Controller.h"
#include "UtilitySpace.h"

const int MAX_DOUBLES_IN_A_ROW = 3;
const int NUMBER_OF_UTILS_ON_BOARD = 2;
const int AMOUNT_TO_GET_OUT_OF_JAIL = 50;
const int MAX_TURNS_IN_JAIL = 3;

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
  int result = 0; // initialize amount to move to 0 to start
  bool rolledDoubleToEscapeJail = false; // check if you rolled a double, allowing you to escape jail

  if (inJail) {
    char result;
    promptIfWantToPayOutOfJail(result);
    if (result == 'y' || result == 'Y'){
        subtractFromBalance(AMOUNT_TO_GET_OUT_OF_JAIL);
        setInJail(false);
    }
  }

  if (inJail && turnsInJail < MAX_TURNS_IN_JAIL){ // if in jail and the number of turns in jail is still less than 3
    // increase the number of turns in jail
    increaseTurnsInJail();
    // output how many turns you are in jail
    outputTurnsInJail();
  } else if (inJail && turnsInJail == MAX_TURNS_IN_JAIL) { // if in jail and the number of turns in jail is now equivalent to max turns
    // escape jail. then continue and roll.
    setInJail(false);
  }


  // check if you started your turn (before rolling) in jail
  bool startedInJail = inJail;

    while (true) {
    // roll the die
    bool rolledDouble = rollDie(result, attributes);
    // if you rolled a double
    if (rolledDouble) {
      // since you rolled a double, if you are in jail, you can escape
      rolledDoubleToEscapeJail = true;
      // increase the rolledDoubleCount. need to keep track in case you roll three doubles (go to jail then)
      rolledDoubleCount++;
      // if you have not rolled 3 doubles in a row (which would send you to jail)
      if (rolledDoubleCount < MAX_DOUBLES_IN_A_ROW) {
        // since you have not rolled enough doubles to go to jail, you can set inJail to false, which will be true no matter what.
        setInJail(false);
        continue; // go back to the top and roll again
      } else { // if you have cross MAX_DOUBLES_IN_A_ROW
        // move piece to jail place
        movePieceTo(attributes.getJailIndex(), attributes);
        // set them in jail
        setInJail(true);
        // do not roll again
        break;
      }
    } else { // you have not rolled a double at all
      break; // exit out of loop
    }
  }

    if (!inJail || (startedInJail && rolledDoubleToEscapeJail)) { // if not in jail (only way you moved in the while loop is if you went to jail) OR you started in jail but rolled a double.
        // move the piece to the desired place
        movePiece(result, attributes);
      }

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

  result += (resultDice1 + resultDice2); // add to the current result (in case there was a double rolled earlier and this is another turn)
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

    bool passedGo = false;

    for (int i = 0; i < amount; i++) {
      // if you are at the end of the board vector, go back to the beginning (GO)
      if (atEndOfBoard(attributes)) {
        currentSpaceIndex = 0;
      } else {
        GOSpace* goSpace = dynamic_cast<GOSpace*>(attributes.getBoard().getSpaces()[currentSpaceIndex].get());
        // if on Go
        if (goSpace){
          passedGo = true;
        }
        currentSpaceIndex++; // increase where you are
        // check if you are on GO
      }
    }
    // check if you land on go to jail
    if (landOnGoToJail(currentSpaceIndex, attributes)) {
      // set current space index to jail index
      currentSpaceIndex = attributes.getJailIndex();
      // signify that the player has been sent to jail and isn't just visiting
      setInJail(true);
    } else if (passedGo && !Controller::firstTurn){ // if you passed Go and it is not the first turn
      addToBalance(200); // add 200 to player balance
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
   // if player is not in jail, but landed on spot, mention that they are just visiting
   if (!inJail && (currentSpaceIndex == attributes.getJailIndex())){
     std::cout << " (just visiting)";
   }

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
  std::vector<PropertySpace*> options = {};

  for (int i = 0; i < ownedProperties.size(); i++){
    // cast to a property space
    PropertySpace* property = dynamic_cast<PropertySpace*>(ownedProperties[i]);
    // if space is a property space
    if (property && haveFullColorSet(property, ownedProperties)){
      options.push_back(property);
    }
  }
  if (!options.empty()){
    std::cout << "Would you, " << getName() << ", like to place house(s)/hotel on one of the following?: " << std::endl;
  }
  //for (int i = 0; i < options.size(); i++){
    listHouseOptions(options);

    std::cout << std::endl;
  //}
  if (!options.empty()) {
    selectWhichOnesToPlaceHouses(options);
  }
}
void Player::listHouseOptions(std::vector<PropertySpace*>& options) {
  for (int i = 0; i < options.size(); i++){
    std::cout << (i + 1) << ". " << options[i]->getName() << std::endl;
  }
}
void Player::selectWhichOnesToPlaceHouses(std::vector<PropertySpace*> &options) {
  std::cout << "Enter the number of the property for which you would like to place house(s) / a hotel (enter -1 to exit): ";
  int input;
  std::cin >> input;
  std::cout << std::endl;

  while (input != -1){
    if (input >= 1 && input <= options.size()){ // valid input
      //PropertySpace* propertySpace = dynamic_cast<PropertySpace*>(options[input-1]); // convert to property space
      std::cout << "On this property, you currently have " << options[input-1]->getNumberHouses() << " houses and " << options[input-1]->getNumberHotels() <<
                      " hotels" << std::endl;
      placeHousesOrHotelOnProperty(options[input - 1]);
    } else { // invalid input
        std::cin.clear();
        std::cin.ignore(10000, '\n');
    }

    std::cout << std::endl << std::endl;

    std::cout << "Enter the number of the property for which you would like to place house(s) / a hotel (enter -1 to exit): ";
    std::cin >> input;
  }

}
void Player::placeHousesOrHotelOnProperty(PropertySpace*& property) {
  bool houseDesired;
  getInputAboutHouseDesired(houseDesired);
  if(houseDesired){
    if (property->hasHotel()){
      std::cout << "Sorry, you cannot place houses on this property as it has a hotel." << std::endl << std::endl;
    } else {
      int numberOfHousesDesired;
      getInputAboutHowManyHousesDesired(numberOfHousesDesired);

      if (property->wouldBeTooManyHouses(numberOfHousesDesired)){
        std::cout << "Sorry, you may only have a maximum of " << PropertySpace::MAX_HOUSES_ALLOWED << " houses on a single property" << std::endl;
      } else {
        placeHousesOnProperty(property, numberOfHousesDesired);
        payForHouses(numberOfHousesDesired);
      }
    }
  } else {
    if(canAffordHotel() && !(property->hasHotel())){
      placeHotelOnPropertyAndGetRidOfHouses(property);
      payForHotel();
    } else if (property->hasHotel()){
      std::cout << "Sorry, you may only have 1 hotel per property" << std::endl << std::endl;
    } else if (!canAffordHotel()) {
      std::cout << "Sorry, you cannot afford a hotel." << std::endl << std::endl;
    }
  }
}
void Player::getInputAboutHouseDesired(bool& houseDesired) {
  std::cout << "Do you want to place a house (enter h) or a hotel (enter H)?:";
  char input;
  std::cin >> input;
  if (input == 'h'){
    houseDesired = true;
  } else if (input == 'H'){
    houseDesired = false;
  }
}
void Player::getInputAboutHowManyHousesDesired(int &numberOfHousesDesired) {
  std::cout << "With your balance of $" << this->getBalance() << ", you can currently afford " << getAffordableNumberOfHouses() << " more houses." << std::endl;

  /*int numberOfAffordableHouses;
  getAffordableNumberOfHouses(numberOfAffordableHouses);*/

  std::cout << std::endl << "How many houses would you like to add? ";
  int input;
  std::cin >> input;

  std::cout << std::endl;

  while (input > getAffordableNumberOfHouses()){
    std::cout << "Sorry, you cannot afford that." << std::endl;
    std::cout << "How many houses would you like to add? ";
    std::cin >> input;
  }

  numberOfHousesDesired = input;

}
int Player::getAffordableNumberOfHouses() {
  return this->getBalance() / PropertySpace::PRICE_OF_HOUSE;
}
void Player::placeHousesOnProperty(PropertySpace*& property, int numberOfHousesDesired) {
  property->addHouses(numberOfHousesDesired);
}
void Player::placeHotelOnPropertyAndGetRidOfHouses(PropertySpace*& property) {
  property->addHotel();
  property->setHouses(0);
}
bool Player::canAffordHotel() {
  return (this->getBalance() - PropertySpace::PRICE_OF_HOTEL > 0);
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
bool Player::landOnGoToJail(int index, GameAttributes& attributes) {
  return index == attributes.getGoToJailIndex();
}
void Player::payForHouses(int numberOfHouses) {
  payBank(numberOfHouses * PropertySpace::PRICE_OF_HOUSE);
}
void Player::payForHotel() {
  payBank(PropertySpace::PRICE_OF_HOTEL);
}
bool Player::haveFullColorSet(PropertySpace *&propertySpace, const std::vector<BuyableSpace*> &ownedProperties) {
    // Brown color has only two properties, rest have 3
    int numberOfPropsWithColor = 0;
    const int NUMBER_OF_BROWNS = 2;
    const int NUMBER_OF_COLOR_EXCEPT_BROWN = 3;

    for (int i = 0; i < ownedProperties.size(); i++) {
      PropertySpace *testingProperty = dynamic_cast<PropertySpace *>(ownedProperties[i]);
      if (testingProperty) {
        if (testingProperty->getColor() == propertySpace->getColor()) {
          numberOfPropsWithColor++;
        }
      }
    }

    // if there are two browns, return true
    if (numberOfPropsWithColor == NUMBER_OF_BROWNS && propertySpace->getColor() == "Brown"){
      return true;
    } else if (numberOfPropsWithColor == NUMBER_OF_COLOR_EXCEPT_BROWN && propertySpace->getColor() != "Brown"){ // if there are 3 other color
      return true;
    } else { // if there is not a full color set
      return false;
    }

}
bool Player::ownBothUtilities() {

  int numberUtilities = 0;

  auto itr = ownedProperties.begin();
  for (;itr != ownedProperties.end(); itr++){
    // cast to a utility space
    UtilitySpace* utility = dynamic_cast<UtilitySpace*>(*itr);
    // if the space is a utility
    if (utility){
      // incremeent number of utlities owned
      numberUtilities++;
    }
    // if you are up to two utilities owned, you have all, break out of loop
    if (numberUtilities == NUMBER_OF_UTILS_ON_BOARD){
      break;
    }
  }
  return (numberUtilities == NUMBER_OF_UTILS_ON_BOARD);
}
void Player::promptIfWantToPayOutOfJail(char &result) {
  std::cout << "Would you like to pay $" << AMOUNT_TO_GET_OUT_OF_JAIL << " to get out of jail? (Y/N)";
  std::cin >> result;
  while (!(result != 'Y' || result!='y' || result !='n' || result != 'N')){
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cout << "Would you like to pay $" << AMOUNT_TO_GET_OUT_OF_JAIL << " to get out of jail? (Y/N)";
    std::cin >> result;
  }
}
void Player::outputTurnsInJail() {
  std::cout << "This is your " << turnsInJail;
  if (turnsInJail == 1){
    std::cout << "st";
  } else if (turnsInJail == 2){
    std::cout << "nd";
  } else if (turnsInJail == 3){
    std::cout << "rd";
  }

  std::cout << " turn in jail." << std::endl;
}











