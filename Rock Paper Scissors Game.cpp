/*
Paper > Rock
Rock > scissors
scissors> paper
---
Rock > Lizard
Lizard > spock
spock > Scissors
Scissors > lizard
lizard > paper
Paper > spock
Spock > rock

*/
#include <iostream>
#include <cstdlib>
#include <time.h>

int main () {
srand(time(NULL));
int computer = std::rand() % 3+ 1;
int user = 0;

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";
 
std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";
 
std::cout << "shoot! ";
std::cin >> user;
if (user == 1) {
  if(computer==2){
    std::cout<<"Player Rock VS Computer Paper => Computer Wins.";
  } else if (computer == 1) {
    std::cout<<"Player Rock VS Computer Rock => Tied.";
  } else if (computer == 3) {
    std::cout<<"Player Rock VS Computer Scissors => Player Wins.";
  }
} else if (user == 2) {
  if (computer==1) {
    std::cout << "Player Paper VS Computer Rock => Player Wins.";
  } else if (computer == 2){
   std::cout << "Player Paper VS Computer Paper => Tied.";
  } else if (computer == 3) {
    std::cout << "Player Paper VS Computer Scissors => Computer Wins.";
  }
} else if (user == 3) {
  if (computer == 1) {
    std::cout<<"Player Scissors VS Computer Rock => Computer Wins.";
  } else if (computer == 2) {
    std::cout<<"Player Scissors VS Computer Paper => Player wins.";
  } else if (computer ==3){
    std::cout<<"Player Scissors VS Computer Scissors => Tied.";
  }
}

}
