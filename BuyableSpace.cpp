//
// Created by Taimur Kashif on 2019-07-05.
//

#include "BuyableSpace.h"
#include "Player.h" // need to dereference so can't have incomplete type

BuyableSpace::BuyableSpace(std::string name, int price, int rent) : Space(name), price(price), rent(rent) {
  owner = {};
}
void BuyableSpace::displayIfOwned() {
  if (noOwner()){
    std::cout << "Owned?: NO" << std::endl;
  } else{
    std::cout << "Owned?: YES, by " << owner.getName() << std::endl;
  }
}
void BuyableSpace::displayPrice() {
  std::cout << "Price: $" << price << std::endl;
}
void BuyableSpace::displayRents() {
  std::cout << "Rent: $" << rent << std::endl;
}
bool BuyableSpace::noOwner() {
  return (owner.getName() == "");
}
void BuyableSpace::promptIfWantToBuy(char &decision) {
  std::cout << "Would you like to buy " << this->getName() << "?" << std::endl;
  std::cout << "Please enter Y/N: ";
  std::cin >> decision;
  while ((decision != 'Y' || decision != 'y') && (decision != 'N' || decision != 'n') ){
    std::cin.clear();
    std::cin.ignore(10000, '\n');
    std::cin >> decision;
  }
  std::cin.clear();
  std::cin.ignore(10000, '\n');
}
void BuyableSpace::assignOwner(Player &player) {
  owner = player;
  player.addOwnedProperty(*this);
}
Player &BuyableSpace::getOwner() const {
  return owner;
}
int BuyableSpace::getRent() const {
  return rent;
}
void BuyableSpace::doAction(Player& player, GameAttributes& attributes) {
  if (noOwner()){
    char decision;
    displayOwnedProperties();
    promptIfWantToBuy(decision);
    if (decision == 'Y' || decision == 'y'){
      assignOwner(player);
    }
  } else{
    player.payOwner(*this);
  }
}
void BuyableSpace::displayOwnedProperties() {
  std::cout << "Your current balance is $" << occupiers.back().getBalance() << std::endl;
  std::cout << "You current own: " << std::endl;
  occupiers.back().listProperties();
}




