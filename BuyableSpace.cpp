//
// Created by Taimur Kashif on 2019-07-05.
//

#include "BuyableSpace.h"
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
}



