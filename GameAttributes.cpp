//
// Created by Taimur Kashif on 2019-07-05.
//

#include "GameAttributes.h"
#include "Player.h" // need complete type
#include "Board.h" // need complete type
#include "Space.h" // need complete type for size()

std::mt19937 GameAttributes::randomNumGenerator(time(nullptr));

GameAttributes::GameAttributes(int numberOfPlayers, Board& board, Dice& dice, MiddleSpace& middle): board(board), dice(dice), middle(middle) {
  usedLetters = {};
  for (int i = 0; i < numberOfPlayers; i++){
    std::string name = getPlayerName(i);
    players.push_back(new Player(50000, generateRandomLetter(), name, false));
  }

  for (int i = 0; i < board.getSpaces().size(); i++) {
   if (board.getSpaces()[i]->getName() == "Jail"){
     jailIndex = i;
   }
  }

  for (int i = 0; i < board.getSpaces().size(); i++) {
    if (board.getSpaces()[i]->getName() == "Go To Jail"){
      goToJailIndex = i;
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
  std::uniform_int_distribution<char> uid(97,122);
  char playerSymbol = uid(randomNumGenerator);
  while (isInUsedLetters(playerSymbol)){
    playerSymbol = uid(randomNumGenerator);
  }
  usedLetters.push_back(playerSymbol);
  std::cout << "Your symbol is: " << playerSymbol;
  std::cout << std::endl;
  std::cout << std::endl;
  return playerSymbol;
}
bool GameAttributes::isInUsedLetters(char letter) const{
  for (int i = 0; i < usedLetters.size(); i++){
    if (usedLetters[i] == letter){
      return true;
    }
  }
  return false;
}
std::vector<Player*> &GameAttributes::getPlayers(){
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
int GameAttributes::getGoToJailIndex() {
  return goToJailIndex;
}
