#include <iostream>
using namespace std;
int main() {
  double beforeTax;
  cout << "A company has a DO NOT PAY the tax deal. \n";
  cout << "If you spend more than $100 you do not pay tax. \n";
  cout <<  "If you spend equal to or less than $100 you do pay tax. \n";
  cout << "Calculate the amount the buyer pays if the tax is 13% \n";
  cout << "How much are you buying? $";
  cin >> beforeTax;
  if (beforeTax <=100)
  {
    cout << "Your total with tax is: $" << beforeTax*1.13;
  }
  else
  {
    cout << "You don't pay tax. Your total is: $" << beforeTax;
  }
  return 0;
}