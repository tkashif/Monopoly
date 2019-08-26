//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_GAMEATTRIBUTES_H
#define MONOPOLY_GAMEATTRIBUTES_H
#include <vector>
#include <iostream>
#include <random>


class Player;
class Board;
class Dice; // only &'s
class MiddleSpace; // only &'s

class GameAttributes {
 public:

  static std::mt19937 randomNumGenerator;
  static int STARTING_MONEY_AMOUNT;

  GameAttributes(int numberOfPlayers, Board& board, Dice& dice, MiddleSpace& middle);

  std::vector<Player*> &getPlayers();
  Board &getBoard();
  Dice &getDice();
  MiddleSpace& getMiddle();
  int getJailIndex();
  int getGoToJailIndex();

 private:
    std::string getPlayerName(int i) const;
    char generateRandomLetter();
    bool isInUsedLetters(char letter) const;

    Board& board;
    Dice& dice;
    std::vector<Player*> players;
    std::vector<char> usedLetters;
    MiddleSpace& middle;
    int jailIndex;
    int goToJailIndex;


};

#endif //MONOPOLY_GAMEATTRIBUTES_H
