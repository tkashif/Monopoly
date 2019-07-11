//
// Created by Taimur Kashif on 2019-07-05.
//

#include "BuyableSpace.h"
BuyableSpace::BuyableSpace(std::string name, int price, int rent) : Space(name), price(price), rent(rent) {

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


