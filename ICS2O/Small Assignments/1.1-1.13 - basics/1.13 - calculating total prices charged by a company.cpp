//Calculating and rounding prices (two ways)
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int number;
  double beforeTax, afterTax, shipping;
  cout << "Welcome to iADD. Here we sell the best calculators in the world!\n\nEnter the number of calculators you want to purchase and hit enter: ";
  cin >> number; 
  beforeTax = number * 8.99;
  afterTax = beforeTax * 0.13 + beforeTax;
  shipping = afterTax + 45;
  cout << "\nTotal before tax: $" << floor(beforeTax*100+0.5)/100 << "\nTotal after tax: $" << floor (afterTax*100+0.5)/100 << "\nShipping cost: $45\n\nTotal cost: $" << floor((shipping*100)+0.5)/100; 
  return 0;
}