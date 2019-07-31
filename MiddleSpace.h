//
// Created by Taimur Kashif on 2019-07-31.
//

#ifndef MONOPOLY_MIDDLESPACE_H
#define MONOPOLY_MIDDLESPACE_H

class MiddleSpace {
 public:
  MiddleSpace() = default;

  void addMoney(int amount);
  void resetMoneyToZero();
  int getMoney();

 private:
  int money;
};

#endif //MONOPOLY_MIDDLESPACE_H
