#include <iostream>
using namespace std;

int main() {
  int dog_age, human_age; 
  string dog_name;
  cout << "Enter dog's name: " << endl;
  cin >> dog_name; 
  cout << "Enter dog's age: " << endl;
  cin >> dog_age;
  if (dog_age == 2) {
    cout << "My name is " << dog_name << ". " << "Af, I am 21 years old in human years." << endl;   
  } else if (dog_age == 1){
      cout << "My name is " << dog_name << ". " << "Af, I am 10.5 years old in human years." << endl;
  } else if (dog_age > 2){
    human_age = 21 + (4*(dog_age-2));  
    cout << "My name is " << dog_name << ". " << "Af, I am " << human_age << " years old in human years." << endl;
  }
  return 0;
  }
