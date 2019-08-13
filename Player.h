//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_PLAYER_H
#define MONOPOLY_PLAYER_H
#include <iostream>

class GameAttributes; // only &'s
class PropertySpace; // only &'s
class Space; // only &'s and *'s
class BuyableSpace; // only &'s

class Player {
 public:

  Player() = default;

  Player(int balance, char pieceLetter, std::string name, bool inJail);

  void takeTurn(GameAttributes& attributes);
  void movePiece(int amount, GameAttributes& attributes);
  void rollDie(int& result, GameAttributes& gameAttributes);

  void updateCurrentSpaceIndex(int amount, GameAttributes& attributes);
  void updateCurrentSpaceOn(GameAttributes& attributes);
  void removePieceFromCurrentSpot(GameAttributes& attributes);

  bool atEndOfBoard(GameAttributes& attributes);

  void displayInfoAboutSpotLandedOn(GameAttributes& attributes);

  void takeAction(GameAttributes& attributes);

  int getCurrentPosition();
  std::string getName();
  int getNumberOfRailroadsOwned();
  int getBalance();
  void listProperties();
  void setSpace(Space* space, int indexOfSpace);

  void payOwner(const BuyableSpace& space);
  void addOwnedProperty(const Space& space);

  void addToBalance(int amount);
  void subtractFromBalance(int amount);

  void promptAboutPlacingHouses();
  void listHouseOptions(std::vector<PropertySpace&>& options);
  void selectWhichOnesToPlaceHouses(std::vector<PropertySpace&>& options);
  void placeHousesOrHotelOnProperty(PropertySpace& property);

  void getInputAboutHouseDesired(bool& houseDesired);
  void getInputAboutHowManyHousesDesired(int& numberOfHousesDesired);
  void getAffordableNumberOfHouses(int& numberOfAffordableHouses);
  void placeHousesOnProperty(PropertySpace& property, int numberOfHousesDesired);
  void placeHotelOnPropertyAndGetRidOfHouses(PropertySpace& property);
  bool canAffordHotel();

  bool operator==(Player& player);

  char getPieceLetter();
  std::vector<std::unique_ptr<BuyableSpace&>>* getOwnedProperties();
  int getCurrentSpaceIndex();

  void setCurrentSpace(GameAttributes& attributes);
  void setInJail(bool ifInJail);


 private:
  int balance;
  char pieceLetter;
  std::vector<std::unique_ptr<BuyableSpace&>>* ownedProperties;
  std::string name;
  int currentSpaceIndex; // i.e. position on board
  Space* currentSpaceOn;
  bool inJail;


};

#endif //MONOPOLY_PLAYER_H
