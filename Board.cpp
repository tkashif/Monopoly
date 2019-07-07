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
  spaces.push_back(new IncomeTaxSpace("Income Tax Space", 200));
  spaces.push_back(new RailroadSpace("Reading Railroad", 200));
  spaces.push_back(new PropertySpace("Oriental Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.push_back(new PropertySpace("Vermont Avenue", "Light Blue", 0, 0, 6, 100));
  spaces.push_back(new PropertySpace("Connecticut Avenue", "Light Blue", 0, 0, 8, 120));
  spaces.push_back(new JailSpace("Jail", true));





}
