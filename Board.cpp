//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Board.h"
#include "Space.h"
#include "GOSpace.h"
#include "PropertySpace.h"
#include "IncomeTaxSpace.h"
#include "RailroadSpace.h"
#include "JailSpace.h"
#include "UtilitySpace.h"
#include "FreeParkingSpace.h"
#include "GoToJailSpace.h"
#include "LuxuryTaxSpace.h"
#include "Player.h"

void Board::displayCurrentState() {

  std::cout << "CURRENT BOARD STATE" << std::endl;

  // print top row
  for (int i = 16; i <= 24; i++){
    // do checking and place * or pieceLetter
    if (spaces[i]->hasOccupier()){
      std::cout << spaces[i]->getOccupier().getPieceLetter();
    } else{
      std::cout << '*';
    }
  }

  std::cout << std::endl;

  // doing middle of board printing
  int startingLeftCol = 15;
  int endingLeftCol = 9;
  int startingRightCol = 25;
  int endingRightCol = 31;
  for (int i = startingLeftCol, j = startingRightCol; (i >= endingLeftCol) && (j<= endingRightCol); i--, j++){
    for (int k = 0; k <= 8; k++){
      // if at left edge
      if (k == 0){
        // do checking and place * or pieceLetter
        if (spaces[i]->hasOccupier()){
          std::cout << spaces[i]->getOccupier().getPieceLetter();
        } else{
          std::cout << '*';
        }
      } else if (k == 8){ // if at right edge
        // do checking and place * or pieceLetter
        if (spaces[j]->hasOccupier()){
          std::cout << spaces[j]->getOccupier().getPieceLetter();
        } else{
          std::cout << '*';
        }
      } else { // if just a blank space, print a blank
        std::cout << ' ';
      }
    }
    /* for (int k = i; k <= j; k++){
      // if it is one of the end ones (i.e not a blank space)
      if (k == i || k == j){
        // do checking and place * or pieceLetter
        if (spaces[k]->hasOccupier()){
          std::cout << spaces[k]->getOccupier().getPieceLetter();
        } else{
          std::cout << '*';
        }
      } else { // if just a blank space, print a blank
        std::cout << ' ';
      }
    }*/

    std::cout << std::endl;
  }


  // printing bottom row
  for (int i = 8; i >= 0; i--){
    // do checking and place * or pieceLetter
    if (spaces[i]->hasOccupier()){
      std::cout << spaces[i]->getOccupier().getPieceLetter();
    } else{
      std::cout << '*';
    }
  }

  // couple of enters
  std::cout << std::endl << std::endl;
}

Board::Board() {

  /*spaces.push_back(std::make_unique<GOSpace>("GO"));

  spaces.push_back(std::make_unique<PropertySpace>("Mediterranean Avenue", "Brown", 0, 0, 2, 60));
  spaces.push_back(std::make_unique<PropertySpace>("Baltic Avenue", "Brown", 0, 0, 4, 60));

  spaces.push_back(std::make_unique<IncomeTaxSpace>("Income Tax Space"));

  spaces.push_back(std::make_unique<RailroadSpace>("Reading Railroad", 200));

  spaces.push_back(std::make_unique<PropertySpace>("Oriental Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.push_back(std::make_unique<PropertySpace>("Vermont Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.push_back(std::make_unique<PropertySpace>("Connecticut Avenue", "Light Blue", 0, 0, 8, 120));

  spaces.push_back(std::make_unique<JailSpace>("Jail"));

  spaces.push_back(std::make_unique<PropertySpace>("St. Charles Place", "Pink", 0, 0, 10, 140));
  spaces.push_back(std::make_unique<UtilitySpace>("Electric Company", 0, 150));
  spaces.push_back(std::make_unique<PropertySpace>("States Avenue", "Pink", 0, 0, 10, 140));
  spaces.push_back(std::make_unique<PropertySpace>("Virginia Avenue", "Pink", 0, 0, 12, 160));

  spaces.push_back(std::make_unique<RailroadSpace>("Pennsylvania Railroad", 200));

  spaces.push_back(std::make_unique<PropertySpace>("St. James Place", "Orange", 0, 0, 14, 180));
  spaces.push_back(std::make_unique<PropertySpace>("Tennessee Avenue", "Orange", 0, 0, 14, 180));
  spaces.push_back(std::make_unique<PropertySpace>("New York Avenue", "Orange", 0, 0, 16, 200));

  spaces.push_back(std::make_unique<FreeParkingSpace>("Free Parking"));

  spaces.push_back(std::make_unique<PropertySpace>("Kentucky Avenue", "Red" , 0, 0, 18, 220));
  spaces.push_back(std::make_unique<PropertySpace>("Indiana Avenue", "Red" , 0, 0, 18, 220));
  spaces.push_back(std::make_unique<PropertySpace>("Illinois Avenue", "Red" , 0, 0, 20, 240));

  spaces.push_back(std::make_unique<RailroadSpace>("B&O Railroad", 200));

  spaces.push_back(std::make_unique<PropertySpace>("Atlantic Avenue", "Yellow" , 0, 0, 22, 260));
  spaces.push_back(std::make_unique<PropertySpace>("Ventnor Avenue", "Yellow" , 0, 0, 22, 260));
  spaces.push_back(std::make_unique<UtilitySpace>("Waterworks", 0, 150));
  spaces.push_back(std::make_unique<PropertySpace>("Marvin Gardens", "Yellow" , 0, 0, 24, 280));

  spaces.push_back(std::make_unique<GoToJailSpace>("Go To Jail"));

  spaces.push_back(std::make_unique<PropertySpace>("Pacific Avenue", "Green" , 0, 0, 26, 300));
  spaces.push_back(std::make_unique<PropertySpace>("North Carolina Avenue", "Green" , 0, 0, 26, 300));
  spaces.push_back(std::make_unique<PropertySpace>("Pennsylvania Avenue", "Green" , 0, 0, 28, 320));

  spaces.push_back(std::make_unique<RailroadSpace>("Short Line", 200));

  spaces.push_back(std::make_unique<LuxuryTaxSpace>("Luxury Tax Space"));*/

  spaces.emplace_back(std::make_unique<GOSpace>("GO"));

  spaces.emplace_back(std::make_unique<PropertySpace>("Mediterranean Avenue", "Brown", 0, 0, 2, 60));
  spaces.emplace_back(std::make_unique<PropertySpace>("Baltic Avenue", "Brown", 0, 0, 4, 60));

  spaces.emplace_back(std::make_unique<IncomeTaxSpace>("Income Tax Space"));

  spaces.emplace_back(std::make_unique<RailroadSpace>("Reading Railroad", 200));

  spaces.emplace_back(std::make_unique<PropertySpace>("Oriental Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.emplace_back(std::make_unique<PropertySpace>("Vermont Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.emplace_back(std::make_unique<PropertySpace>("Connecticut Avenue", "Light Blue", 0, 0, 8, 120));

  spaces.emplace_back(std::make_unique<JailSpace>("Jail"));

  spaces.emplace_back(std::make_unique<PropertySpace>("St. Charles Place", "Pink", 0, 0, 10, 140));
  spaces.emplace_back(std::make_unique<UtilitySpace>("Electric Company", 0, 150));
  spaces.emplace_back(std::make_unique<PropertySpace>("States Avenue", "Pink", 0, 0, 10, 140));
  spaces.emplace_back(std::make_unique<PropertySpace>("Virginia Avenue", "Pink", 0, 0, 12, 160));

  spaces.emplace_back(std::make_unique<RailroadSpace>("Pennsylvania Railroad", 200));

  spaces.emplace_back(std::make_unique<PropertySpace>("St. James Place", "Orange", 0, 0, 14, 180));
  spaces.emplace_back(std::make_unique<PropertySpace>("Tennessee Avenue", "Orange", 0, 0, 14, 180));
  spaces.emplace_back(std::make_unique<PropertySpace>("New York Avenue", "Orange", 0, 0, 16, 200));

  spaces.emplace_back(std::make_unique<FreeParkingSpace>("Free Parking"));

  spaces.emplace_back(std::make_unique<PropertySpace>("Kentucky Avenue", "Red" , 0, 0, 18, 220));
  spaces.emplace_back(std::make_unique<PropertySpace>("Indiana Avenue", "Red" , 0, 0, 18, 220));
  spaces.emplace_back(std::make_unique<PropertySpace>("Illinois Avenue", "Red" , 0, 0, 20, 240));

  spaces.emplace_back(std::make_unique<RailroadSpace>("B&O Railroad", 200));

  spaces.emplace_back(std::make_unique<PropertySpace>("Atlantic Avenue", "Yellow" , 0, 0, 22, 260));
  spaces.emplace_back(std::make_unique<PropertySpace>("Ventnor Avenue", "Yellow" , 0, 0, 22, 260));
  spaces.emplace_back(std::make_unique<UtilitySpace>("Waterworks", 0, 150));
  spaces.emplace_back(std::make_unique<PropertySpace>("Marvin Gardens", "Yellow" , 0, 0, 24, 280));

  spaces.emplace_back(std::make_unique<GoToJailSpace>("Go To Jail"));

  spaces.emplace_back(std::make_unique<PropertySpace>("Pacific Avenue", "Green" , 0, 0, 26, 300));
  spaces.emplace_back(std::make_unique<PropertySpace>("North Carolina Avenue", "Green" , 0, 0, 26, 300));
  spaces.emplace_back(std::make_unique<PropertySpace>("Pennsylvania Avenue", "Green" , 0, 0, 28, 320));

  spaces.emplace_back(std::make_unique<RailroadSpace>("Short Line", 200));

  spaces.emplace_back(std::make_unique<LuxuryTaxSpace>("Luxury Tax Space"));








}
std::vector<std::unique_ptr<Space>>& Board::getSpaces(){
  return spaces;
}
std::unique_ptr<Space>& Board::operator[](int index) {
  return spaces[index];
}

