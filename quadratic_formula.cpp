#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int a, b, c;
  cout << "Enter a: " << endl;
  cin >> a;
  cout << "Enter b: " << endl;
  cin >> b;
  cout << "Enter c: " << endl;
  cin >> c;
double root1, root2;
root1 = (-b + sqrt(b * b - (4 * a * c))) / (2 * a);
root2 = (-b - sqrt(b * b - (4 * a * c))) / (2 * a); 
  cout << "root 1 is: " << root1 << endl;
  cout << "root 2 is: " << root2 << endl;
  return 0;
}
