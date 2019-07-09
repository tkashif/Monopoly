//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Board.h"
void Board::displayCurrentState() {

}

Board::Board() {

  spaces.push_back(std::make_unique<GOSpace>("GO"));

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

  spaces.push_back(std::make_unique<LuxuryTaxSpace>("Luxury Tax Space"));









}
