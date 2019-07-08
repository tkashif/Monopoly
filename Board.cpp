//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Board.h"
void Board::displayCurrentState() {

}

Board::Board() {
  spaces.push_back(new GOSpace("GO"));

  spaces.push_back(new PropertySpace("Mediterranean Avenue", "Brown", 0, 0, 2, 60));
  spaces.push_back(new PropertySpace("Baltic Avenue", "Brown", 0, 0, 4, 60));

  spaces.push_back(new IncomeTaxSpace("Income Tax Space"));

  spaces.push_back(new RailroadSpace("Reading Railroad", 200));

  spaces.push_back(new PropertySpace("Oriental Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.push_back(new PropertySpace("Vermont Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.push_back(new PropertySpace("Connecticut Avenue", "Light Blue", 0, 0, 8, 120));

  spaces.push_back(new JailSpace("Jail"));

  spaces.push_back(new PropertySpace("St. Charles Place", "Pink", 0, 0, 10, 140));
  spaces.push_back(new UtilitySpace("Electric Company", 0, 150));
  spaces.push_back(new PropertySpace("States Avenue", "Pink", 0, 0, 10, 140));
  spaces.push_back(new PropertySpace("Virginia Avenue", "Pink", 0, 0, 12, 160));

  spaces.push_back(new RailroadSpace("Pennsylvania Railroad", 200));

  spaces.push_back(new PropertySpace("St. James Place", "Orange", 0, 0, 14, 180));
  spaces.push_back(new PropertySpace("Tennessee Avenue", "Orange", 0, 0, 14, 180));
  spaces.push_back(new PropertySpace("New York Avenue", "Orange", 0, 0, 16, 200));

  spaces.push_back(new FreeParkingSpace("Free Parking"));

  spaces.push_back(new PropertySpace("Kentucky Avenue", "Red" , 0, 0, 18, 220));
  spaces.push_back(new PropertySpace("Indiana Avenue", "Red" , 0, 0, 18, 220));
  spaces.push_back(new PropertySpace("Illinois Avenue", "Red" , 0, 0, 20, 240));

  spaces.push_back(new RailroadSpace("B&O Railroad", 200));

  spaces.push_back(new PropertySpace("Atlantic Avenue", "Yellow" , 0, 0, 22, 260));
  spaces.push_back(new PropertySpace("Ventnor Avenue", "Yellow" , 0, 0, 22, 260));
  spaces.push_back(new UtilitySpace("Waterworks", 0, 150));
  spaces.push_back(new PropertySpace("Marvin Gardens", "Yellow" , 0, 0, 24, 280));

  spaces.push_back(new GoToJailSpace("Go To Jail"));

  spaces.push_back(new PropertySpace("Pacific Avenue", "Green" , 0, 0, 26, 300));
  spaces.push_back(new PropertySpace("North Carolina Avenue", "Green" , 0, 0, 26, 300));
  spaces.push_back(new PropertySpace("Pennsylvania Avenue", "Green" , 0, 0, 28, 320));

  spaces.push_back(new RailroadSpace("Short Line", 200));

  spaces.push_back(new LuxuryTaxSpace("Luxury Tax Space"));









}
