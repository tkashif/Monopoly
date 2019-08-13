//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_BOARD_H
#define MONOPOLY_BOARD_H
#include <vector>
#include <memory>

class Space;

class Board {
 public:
  Board();

  void displayCurrentState();

  std::vector<std::unique_ptr<Space>> &getSpaces();

  std::unique_ptr<Space>& operator[](int index);


 private:
  std::vector<std::unique_ptr<Space>> spaces;


};

#endif //MONOPOLY_BOARD_H
