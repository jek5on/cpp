#include <iostream>
using namespace std;

int main() {
  double pesos, reais, soles, dollars;
  cout << "Enter number of Colombian Pesos: " << endl;
  cin >> pesos;
  cout << "Enter number of Brazilian Reais: " << endl;
  cin >> reais;
  cout << "Enter number of Peruvian Soles: " << endl;
  cin >> soles;
  dollars = (pesos * 0.0021)+(reais * 0.19)+(soles * 0.26);
  cout << "US Dollars = " << dollars << "$" << endl;
  return 0;  

  
  
  
}
