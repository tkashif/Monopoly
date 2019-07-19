//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Space.h"
Space::Space(const std::string& name): name(name) {
  free = true;
  occupied = false;
  occupiers = {};

}
void Space::displayName() {
  std::cout << "NAME: " << name << std::endl;
}
std::string Space::getName(){
  return name;
}
void Space::addOccupier(const Player& personWhoLanded) {
  occupiers.push_back(personWhoLanded);
}
void Space::removeFirstOccupier() {
  occupiers.erase(occupiers.begin());
}

