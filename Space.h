//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_SPACE_H
#define MONOPOLY_SPACE_H
#include <iostream>

class Space {
 public:
  Space(const std::string& name);

  /*attributes.getBoard()[currentSpaceIndex].displayName();
  attributes.getBoard()[currentSpaceIndex].displayIfOwned();
  attributes.getBoard()[currentSpaceIndex].displayPrice();
  attributes.getBoard()[currentSpaceIndex].displayRents();
   */

  virtual void displayName();

/*  virtual void displayIfOwned() = 0;
  virtual void displayPrice() = 0;
  virtual void displayRents() = 0; --> DONT MAKE SENSE TO HAVE HERE */

  virtual const std::string &getName();

 protected:
  std::string name;
  bool occupied;
  bool free;


};

#endif //MONOPOLY_SPACE_H
