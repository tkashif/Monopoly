//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Space.h"
Space::Space(const std::string& name): name(name) {
  free = true;
  occupied = false;

}
void Space::displayName() {
  std::cout << "NAME: " << name << std::endl;
}
const std::string &Space::getName(){
  return name;
}

