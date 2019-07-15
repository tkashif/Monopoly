//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_TAXSPACE_H
#define MONOPOLY_TAXSPACE_H
#include "NonBuyableSpace.h"

class TaxSpace : public NonBuyableSpace {
 public:
  TaxSpace(std::string name, int penalty);

 protected:
  int penalty;
};

#endif //MONOPOLY_TAXSPACE_H
