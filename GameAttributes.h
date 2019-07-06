//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_GAMEATTRIBUTES_H
#define MONOPOLY_GAMEATTRIBUTES_H
#include "Player.h"
#include "View.h"
#include "Board.h"
#include "Dice.h"
#include <vector>
#include <iostream>

class GameAttributes {
 public:
  GameAttributes(int numberOfPlayers, View view, Board board, Dice dice);

 private:
    std::string getPlayerName(int i) const;
    std::string generateRandomLetter() const;
    bool isInUsedLetters(char letter) const;

    View view;
    Board board;
    Dice dice;
    std::vector<Player> players;
    std::vector<char> usedLetters;


};

#endif //MONOPOLY_GAMEATTRIBUTES_H
