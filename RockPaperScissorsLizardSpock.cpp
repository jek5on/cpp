#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  srand(time(NULL));
  string select;
  cout << "Enter Rock Paper Scissors Lizard or Spock" << endl;
  cin >> select;
  //string rock, paper, scissos, lizard, spock;
  if (select == "Rock" || select == "rock"){
    int computer_select = rand() % 4 + 1;
    switch(computer_select){
      case 1:
      cout << "Rock" << endl;
      cout << "Draw" << endl;
      break;
      case 2:
      cout << "Paper" << endl;
      cout << "You lose" << endl;
      break;
      case 3:
      cout << "Scissors" << endl;
      cout << "You win" << endl;
      break;
      case 4:
      cout << "Lizard" << endl;
      cout << "You win" << endl;
      break;
      case 5:
      cout << "Spock" << endl;
      cout << "You lose" << endl;
      break;       
    }
  } else if (select == "Paper" || select == "paper"){
    int computer_select = rand() % 4 + 1;
    switch(computer_select){
      case 1:
      cout << "Rock" << endl;
      cout << "You win" << endl;
      break;
      case 2:
      cout << "Paper" << endl;
      cout << "Draw" << endl;
      break;
      case 3:
      cout << "Scissors" << endl;
      cout << "You lose" << endl;
      break;
      case 4:
      cout << "Lizard" << endl;
      cout << "You lose" << endl;
      break;
      case 5:
      cout << "Spock" << endl;
      cout << "You win" << endl;
      break;       
    } 
  } else if(select == "Scissors" || select == "scissors"){
    int computer_select = rand() % 4 + 1;
    switch(computer_select){
      case 1:
      cout << "Rock" << endl;
      cout << "You lose" << endl;
      break;
      case 2:
      cout << "Paper" << endl;
      cout << "You win" << endl;
      break;
      case 3:
      cout << "Scissors" << endl;
      cout << "Draw" << endl;
      break;
      case 4:
      cout << "Lizard" << endl;
      cout << "You win" << endl;
      break;
      case 5:
      cout << "Spock" << endl;
      cout << "You lose" << endl;
      break;       
    }    
  } else if(select == "Lizard" || select == "lizard"){
    int computer_select = rand() % 4 + 1;
    switch(computer_select){
      case 1:
      cout << "Rock" << endl;
      cout << "You lose" << endl;
      break;
      case 2:
      cout << "Paper" << endl;
      cout << "You win" << endl;
      break;
      case 3:
      cout << "Scissors" << endl;
      cout << "You lose" << endl;
      break;
      case 4:
      cout << "Lizard" << endl;
      cout << "Draw" << endl;
      break;
      case 5:
      cout << "Spock" << endl;
      cout << "You win" << endl;
      break;       
    }
  } else if(select == "Spock" || select == "spock"){
    int computer_select = rand() % 4 + 1;
    switch(computer_select){
      case 1:
      cout << "Rock" << endl;
      cout << "You win" << endl;
      break;
      case 2:
      cout << "Paper" << endl;
      cout << "You lose" << endl;
      break;
      case 3:
      cout << "Scissors" << endl;
      cout << "You win" << endl;
      break;
      case 4:
      cout << "Lizard" << endl;
      cout << "You lose" << endl;
      break;
      case 5:
      cout << "Spock" << endl;
      cout << "Draw" << endl;
      break;     
  }
  } else {
    cout << "Invalid input" << endl;
  }
  return 0;
  
}
