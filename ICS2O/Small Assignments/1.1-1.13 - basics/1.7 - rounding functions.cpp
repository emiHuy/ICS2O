//Using round, ceil, and floor functions
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double firstNumber = 49.8;
  //normal rounding
  cout << "round: " << round(firstNumber) << "\n";
  //round up
  cout << "ceil: " <<
    ceil(firstNumber) << "\n";
  //round down
  cout << "floor: " << floor(firstNumber);
  return 0;
}