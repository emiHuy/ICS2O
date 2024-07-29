#include <iostream>
using namespace std;
#include <cmath>
 
int main() {
  int number;
  double cost, afterTax, rounded, shipping;
  while (true)
  {
    cout << "Welcome to iADD Calculators. How many calculators would you like to buy (enter 0 to end)? ";
    cin >> number;
    if (number == 0)
    {
      cout <<"Good bye!";
      break; 
    }
    else if (number >0 and number <100)
    {
      cost = number*3.49;
    }
    else if (number >= 100 and number <=150)
    {
      cost = number*3.19;
    }
    else if (number >= 151 and number <=200)
    {
      cost = number*2.99;
    }
    else if (number >200)
    {
      cost = number*2.59;
    }
    afterTax = cost * 1.13;
    rounded = floor (afterTax*100+0.5)/100;
    cout << "The cost after tax of " << number <<" calculators is: $" << rounded <<".\n";
    if (rounded <400)
    {
      shipping = rounded+55;
      cout << "Shipping Cost: $55\n"; 
    }
    else if (rounded >=400 and rounded <=500)
    {
      shipping = rounded + 35;
      cout << "Shipping Cost: $35\n"; 
    }
    else if (rounded >500)
    {
      shipping = rounded;
      cout << "Shipping Cost: $0\n";
    }
    cout << "The total after shipping is: $" << shipping << ".\n\n";
  }
  return 0;
}