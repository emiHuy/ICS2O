#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double beforeTax, aftertax, tip, total;
  cout << "Welcome!. This program will calculate tax and tip for a meal!";
  //the price of the meal (before tax) will be entered and stored in beforeTax variable
  cout << "\nWhat is the amount of the meal BEFORE TAX? $";
  cin >> beforeTax;
  //calculates the price after tax
  aftertax = beforeTax *1.13;
  //the tip will be entered
  cout << "How much do you want to tip (%)? ";
  cin >> tip;
  //Calculates the total price and outputs it
  total = aftertax * tip/100 +aftertax;
  cout << "The total of your meal with tip is $ " << floor ((total*100)+0.5)/100;
  return 0;
}