//
// Created by Taimur Kashif on 2019-07-05.
//

#include "RailroadSpace.h"
RailroadSpace::RailroadSpace(std::string name, int price) : BuyableSpace(name, price, 25){
  // AM SETTING RENT TO 25 AS NOT SURE HOW I WILL CALCULATE RAILROAD PRICE RENT RN -> DO IN GAME
}
void RailroadSpace::displayRents() {
  // rent is equivalent to 25 * how many railroads are owned by the owner of this railroad
  if (noOwner()){
    BuyableSpace::displayRents();
  } else {
    rent *= owner.getNumberOfRailroadsOwned();
  }
}
