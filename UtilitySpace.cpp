//
// Created by Taimur Kashif on 2019-07-05.
//

#include "UtilitySpace.h"
#include "Dice.h" // need full type
#include "Player.h"

const int MULT_FACTOR_ONE_UTIL = 4;
const int MULT_FACTOR_TWO_UTIL = 8;

UtilitySpace::UtilitySpace(std::string name, int rent, int price) : BuyableSpace(name, rent, price) {

}
void UtilitySpace::displayRents() {
  if (noOwner()){
    std::cout << "RENT: N/A" << std::endl;
  } else if (getOwner() != occupiers.back()){
    char input;

    std::cout << "Please roll dice to determine rent (press any key): ";
    std::cin >> input; // eat input

    Dice dice;
    int result = dice.roll();
    std::cout << "You rolled a " << result << std::endl;

    if (owner->ownBothUtilities()){
      rent = MULT_FACTOR_TWO_UTIL * result;
    } else {
      rent = MULT_FACTOR_ONE_UTIL * result;
    }

    BuyableSpace::displayRents();
  }
}
