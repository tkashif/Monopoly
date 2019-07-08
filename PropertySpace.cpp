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