//Calculating the y-value from input of x-value
#include <iostream>
using namespace std;
int main() {
  double y, x;
  cout << "Enter the x-value for the linear equation y=8x-10: ";
  cin >> x;
  y=8*x-10;
  cout << "The value of y is " <<y << ".";
  return 0;
}