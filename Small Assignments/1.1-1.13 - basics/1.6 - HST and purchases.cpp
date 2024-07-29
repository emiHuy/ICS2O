//Calculating total charge of purchase with HST
#include <iostream>
using namespace std;
int main() {
  double purchase, totalcharge;
  cout << "Enter the cost of purchase and hit enter: ";
  cin >> purchase;
  totalcharge = purchase * 0.13 + purchase;
  cout << "The total charge will be $" << totalcharge <<".";
return 0;
}