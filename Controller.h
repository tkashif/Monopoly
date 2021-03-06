//
// Created by Taimur Kashif on 2019-07-05.
//

#ifndef MONOPOLY_CONTROLLER_H
#define MONOPOLY_CONTROLLER_H

class GameAttributes; // only &'s
class Player; // only &'s

class Controller {

 public:

  static bool firstTurn;

  Controller(GameAttributes& attributes);

  void setUpGame();
  void playGame();

  bool gameIsOver();
  void switchPlayer(int& currentPlayerIndex, int& currentSpaceIndex);
  void displayGameStats();
  void placePlayersOnGO();
  void removePlayer(Player& player);
  void displayTurnSeperator();
  void displayWhosTurn(const int& currentPlayerIndex);
  void announceWinner();

 private:
  GameAttributes& attributes;

};

#endif //MONOPOLY_CONTROLLER_H
