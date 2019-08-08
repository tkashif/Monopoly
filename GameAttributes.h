//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_GAMEATTRIBUTES_H
#define MONOPOLY_GAMEATTRIBUTES_H
#include <vector>
#include <iostream>
#include "Player.h"
#include "View.h"
#include "Board.h"
#include "Dice.h"
#include "MiddleSpace.h"

class Player;
class Board; // added this without include thing

class GameAttributes {
 public:
  GameAttributes(int numberOfPlayers, View view, Board& board, Dice dice, MiddleSpace middle);

  std::vector<Player> &getPlayers();
  Board &getBoard();
  Dice &getDice();
  MiddleSpace& getMiddle();
  int getJailIndex();

 private:
    std::string getPlayerName(int i) const;
    char generateRandomLetter();
    bool isInUsedLetters(char letter) const;

    View view;
    Board& board;
    Dice dice;
    std::vector<Player> players;
    std::vector<char> usedLetters;
    MiddleSpace middle;
    int jailIndex;


};

#endif //MONOPOLY_GAMEATTRIBUTES_H
