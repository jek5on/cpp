#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  string quation;  
  cout << "Enter your quation:\n";
  cin >> quation;
  cout << "MAGIC 8-BALL\n";
  srand(time(NULL));
  int answers = rand() % 20;  
  switch (answers){
    case 1:
    cout << "It is certain." << endl;
    break;
    case 2:
    cout << "It is decidedly so." << endl;
    break;
    case 3:
    cout << "Without a doubt." << endl;
    break;
    case 4:
    cout << "Yes - definitely." << endl;
    break;
    case 5:
    cout << "You may rely on it." << endl;
    break;
    case 6:
    cout << "As I see it, yes." << endl;
    break;
    case 7:
    cout << "Most likely." << endl;
    break;
    case 8:
    cout << "Outlook good." << endl;
    break;
    case 9:
    cout << "Yes." << endl;
    break;
    case 10:
    cout << "Sings point to yes." << endl;
    break;
    case 11:
    cout << "Reply hazy, try again." << endl;
    break;
    case 12:
    cout << "Ask again later." << endl;
    break;
    case 13:
    cout << "Better not tell you now." << endl;
    break;
    case 14:
    cout << "Cannot predict now." << endl;
    break;
    case 15:
    cout << "Concentrate and ask again." << endl;
    break;
    case 16:
    cout << "Don't count on it." << endl;
    break;
    case 17:
    cout << "My reply is no." << endl;
    break;
    case 18:
    cout << "My sources say no." << endl;
    break; 
    case 19:
    cout << "Outlook not so good." << endl;
    break;
    case 20:
    cout << "Very doubtful." << endl;
    break;
  }
  return 0;
}
