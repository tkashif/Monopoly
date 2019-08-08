//
// Created by Taimur Kashif on 2019-07-05.
//

#include "GameAttributes.h"
GameAttributes::GameAttributes(int numberOfPlayers, View view, Board& board, Dice dice, MiddleSpace middle): view(view), board(board), dice(dice), middle(middle) {
  usedLetters = {};
  for (int i = 0; i < numberOfPlayers; i++){
    std::string name = getPlayerName(i);
    players[i] = Player(0, generateRandomLetter(), name, false);
  }

  for (int i = 0; i < board.getSpaces().size(); i++) {
   if (board.getSpaces()[i]->getName() == "Jail"){
     jailIndex = i;
   }
  }

};
std::string GameAttributes::getPlayerName(int i) const {
  std::string name;
  std::cout << "Player " << i + 1 << ", please enter your name: ";
  std::cin >> name;
  return name;
}
char GameAttributes::generateRandomLetter() {
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
std::vector<Player> &GameAttributes::getPlayers(){
  return players;
}
Board &GameAttributes::getBoard()  {
  return board;
}
Dice &GameAttributes::getDice()  {
  return dice;
}
MiddleSpace &GameAttributes::getMiddle()  {
  return middle;
}
int GameAttributes::getJailIndex() {
  return jailIndex;
}
