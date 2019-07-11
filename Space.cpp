//
// Created by Taimur Kashif on 2019-07-05.
//

#include "Space.h"
Space::Space(std::string name): name(name) {

}
void Space::displayName() {
  std::cout << "NAME: " << name << std::endl;
}
