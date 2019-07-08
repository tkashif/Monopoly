//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_SPACE_H
#define MONOPOLY_SPACE_H
#include <iostream>

class Space {
 public:
  Space(std::string name);

 protected:
  std::string name;
  bool occupied;
  bool free;


};

#endif //MONOPOLY_SPACE_H
