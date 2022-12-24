#include <iostream>
using namespace std;

int main(){
  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;
  int answer1, answer2, answer3, answer4;
  cout << "The Sorting Hat Quiz!" << endl;
  cout << "Q1) When I'm dead, I want people to remember me as:\n 1) The Good\n 2) The Great\n 3) The Wise\n 4) The Bold" << endl;
  cin >> answer1;
  if (answer1 == 1){
    hufflepuff++;
  } else if(answer1 == 2){
    slytherin++;
  } else if(answer1 == 3){
    ravenclaw++;
  } else if(answer1 == 4){
    gryffindor++;
  } else {
    cout << "Invalid input" << endl;
  }
  cout << "Q2) Dawn or Dusk?\n 1) Dawn\n 2) Dusk" << endl;
  cin >> answer2;
  if (answer2 == 1){
    gryffindor++;
    ravenclaw++;
  } else if (answer2 == 2) {
    hufflepuff++;
    slytherin++;
  } else {
    cout << "Invalid input" << endl;
  }
  cout << "Q3) Which kind of instrument most pleases your ear?\n 1) The violin\n 2) The trumpet\n 3) The piano\n 4) The drum" << endl;
  cin >> answer3;
  if (answer3 == 1){
    slytherin++;
  } else if (answer3 == 2){
    hufflepuff++;
  } else if (answer3 == 3){
    ravenclaw++;
  } else if (answer3 == 4){
    gryffindor++;
  } else {
    cout << "Invalid input" << endl;
  }
  cout << "Q4) Wich road tempts you most?\n 1) The wide, sunny grassy lane\n 2) The narrow, dark, lantern-lit alley\n 3) The twisting, leaf-strewn path through woods\n 4) The cobbled street line(ancient duildings)" << endl;
  cin >> answer4;
  if (answer4 == 1){
    hufflepuff++;
  } else if(answer4 == 2){
    slytherin++;
  } else if(answer4 == 3){
    gryffindor++;
  } else if(answer4 == 4){
    ravenclaw++;
  } else {
    cout << "Invalid input" << endl;
  }
  string house;
  srand(time(NULL));    
  if (gryffindor > hufflepuff && gryffindor > ravenclaw && gryffindor > slytherin){   
    house = "Gryffindor";
  } else if (hufflepuff > gryffindor && hufflepuff > ravenclaw && hufflepuff > slytherin){    
    house = "Hufflepuff";
  } else if (ravenclaw > gryffindor && ravenclaw > hufflepuff && ravenclaw > slytherin){    
    house = "Revanclew";
  } else if (slytherin > gryffindor && slytherin > hufflepuff && slytherin > ravenclaw){    
    house = "Slytherin";    
  }  
  cout << " Your house " << house << endl;
  return 0;
   
}
