//
// Created by Taimur Kashif on 2019-07-05.
//

#include "UtilitySpace.h"
UtilitySpace::UtilitySpace(std::string name, int rent, int price) : BuyableSpace(name, rent, price) {

}
void UtilitySpace::displayRents() {
  if (noOwner()){
    std::cout << "RENT: N/A" << std::endl;
  } else{
    char input;

    std::cout << "Please roll dice to determine rent (press any key): ";
    std::cin >> input; // eat input

    Dice dice;
    int result = dice.roll();
    std::cout << "You rolled a " << result << std::endl;

    rent = 4 * result;

    BuyableSpace::displayRents();
  }
}
