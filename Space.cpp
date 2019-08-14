//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Space.h"
Space::Space(const std::string& name): name(name) {
  occupiers = {};

}
void Space::displayName() {
  std::cout << "NAME: " << name << std::endl;
}
std::string Space::getName(){
  return name;
}
void Space::addOccupier(Player& personWhoLanded) {
  occupiers.push_back(&personWhoLanded);
}
void Space::removeFirstOccupier() {
  occupiers.erase(occupiers.begin());
}
bool Space::hasOccupier() {
  return (!occupiers.empty());
}
Player &Space::getOccupier() {
  return *(occupiers.back());
}


