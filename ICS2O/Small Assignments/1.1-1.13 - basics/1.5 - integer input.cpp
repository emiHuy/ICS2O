//Calculating the sum of two inputted integers
#include <iostream>
using namespace std;
int main() {
  int firstinteger, secondinteger, product;
  cout << "Enter the first integer and hit enter: ";
  cin >> firstinteger;
  cout << "Enter the second integer and hit enter: ";
  cin >> secondinteger;
  product = firstinteger * secondinteger;
  cout << firstinteger << "*" << secondinteger << "=" << product;
  return 0;
}