//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_NONBUYABLESPACE_H
#define MONOPOLY_NONBUYABLESPACE_H
#include "Space.h" // base class
#include <iostream>

class NonBuyableSpace : public Space {
 public:
  NonBuyableSpace(std::string name);

};

#endif //MONOPOLY_NONBUYABLESPACE_H
