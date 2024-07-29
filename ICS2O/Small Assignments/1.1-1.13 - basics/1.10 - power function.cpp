//using power function (exponents)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
int base, exponent;
  cout << "Enter the base of the power and hit enter: ";
  cin >> base;
  cout << "\nEnter the exponent of thepower and hit enter: ";
  cin >> exponent;
  cout << "\n\nThe answer is " << pow(base,exponent);
  return 0;
}