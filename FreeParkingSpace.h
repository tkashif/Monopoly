//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_FREEPARKINGSPACE_H
#define MONOPOLY_FREEPARKINGSPACE_H
#include "NonBuyableSpace.h"

class FreeParkingSpace : public NonBuyableSpace {
 public:
  FreeParkingSpace(std::string name);

 protected:
  int benefit;

};

#endif //MONOPOLY_FREEPARKINGSPACE_H
