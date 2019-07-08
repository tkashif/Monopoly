//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_BOARD_H
#define MONOPOLY_BOARD_H
#include "Space.h"
#include <vector>
#include "GOSpace.h"
#include "PropertySpace.h"
#include "IncomeTaxSpace.h"
#include "RailroadSpace.h"
#include "JailSpace.h"
#include "UtilitySpace.h"
#include "FreeParkingSpace.h"
#include "GoToJailSpace.h"
#include "LuxuryTaxSpace.h"

class Board {
 public:
  Board();

  void displayCurrentState();

 private:
  std::vector<std::unique_ptr<Space>> spaces;


};

#endif //MONOPOLY_BOARD_H
