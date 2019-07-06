//
// Created by Taimur Kashif on 2019-07-05.
//

#include "GameAttributes.h"
GameAttributes::GameAttributes(int numberOfPlayers, View view, Board board, Dice dice): view(view), board(board), dice(dice) {
  usedLetters = {};
  for (int i = 0; i < numberOfPlayers; i++){
    std::string name = getPlayerName(i);
    players[i] = Player(0, generateRandomLetter(), name);
  }
}
std::string GameAttributes::getPlayerName(int i) const {
  std::string name;
  std::cout << "Player " << i + 1 << ", please enter your name: ";
  std::cin >> name;
  return name;
}
std::string GameAttributes::generateRandomLetter() const {
  char playerSymbol = 97 + rand() % 26;
  while (isInUsedLetters(playerSymbol)){
    playerSymbol = 97 + rand() % 26;
  }
  usedLetters.push_back(playerSymbol);
  std::cout << "Your symbol is: " << playerSymbol;
}
bool GameAttributes::isInUsedLetters(char letter) const{
  for (int i = 0; i < usedLetters.size(); i++){
    if (usedLetters[i] == letter){
      return true;
    }
  }
  return false;
}
