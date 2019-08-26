//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_PROPERTYSPACE_H
#define MONOPOLY_PROPERTYSPACE_H
#include <iostream>
#include <cmath>
#include "BuyableSpace.h" // base class


/*
 * Name (1)
Color (2)
Houses (3)
Hotels (4)
Owner (- NULL)
Rent (5)
Starting Price (6)
Price one house (- * 10 prev)
Price two house (- * 10 prev)
Price three house (- * 10 prev)
Price four house (- * 10 prev)
Price hotel (- * 10 prev)
 *
 */

class PropertySpace : public BuyableSpace {
 public:

  const static int PRICE_OF_HOUSE;
  const static int PRICE_OF_HOTEL;

  PropertySpace() = default;

  PropertySpace(std::string name, std::string color, int numberOfHouses, int numberOfHotels, int rent, int price);

  virtual void displayName() override;
  virtual void displayRents() override;

  void addHouses(int number);
  void setHouses(int number);
  void addHotel();

  int getNumberHouses();
  int getNumberHotels();

  bool hasHotel();

  int getRent() const override;

 protected:
  std::string color;
  int numberOfHouses;
  int numberOfHotels;
};

#endif //MONOPOLY_PROPERTYSPACE_H
