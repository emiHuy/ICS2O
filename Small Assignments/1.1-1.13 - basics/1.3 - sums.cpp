//calculating the sum of integers
#include <iostream>

int main() {
  int someinteger, anotherinteger, sum;
  someinteger = 8;
  anotherinteger = 3;
  std::cout << "Here is an integer: " << someinteger << "\n";
  std::cout << "Here is another integer: " << anotherinteger << "\n";
  sum = someinteger + anotherinteger; 
  std::cout << "The sum of both integers is " << sum << "\n";
  return 0;
}