//
// Created by Taimur Kashif on 2019-07-05.
//

#include "PropertySpace.h"

PropertySpace::PropertySpace(std::string name,
                             std::string color,
                             int numberOfHouses,
                             int numberOfHotels,
                             int rent,
                             int price): BuyableSpace(name, price, rent), color(color), numberOfHouses(numberOfHouses),
                             numberOfHotels(numberOfHotels) {

}
void PropertySpace::displayRents() {
  BuyableSpace::displayRents();

  std::cout << "Rent with color set: $" << rent * 2 << std::endl;
  std::cout << "Rent with 1 house: $" << rent * 2 * 3 << std::endl;
  std::cout << "Rent with 2 houses: $" << rent * 2 * pow(3, 2) << std::endl;
  std::cout << "Rent with 3 houses: $" << rent * 2 * pow(3, 3) << std::endl;
  std::cout << "Rent with 4 houses: $" << rent * 2 * pow(3, 4) << std::endl;
  std::cout << "Rent with hotel: $" << rent * 2 * pow(3, 5) << std::endl;

}
void PropertySpace::displayName() {
  Space::displayName();

  std::cout << "COLOR: " << color << std::endl;
}
