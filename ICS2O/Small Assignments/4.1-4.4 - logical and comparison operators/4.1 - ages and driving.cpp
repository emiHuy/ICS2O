#include <iostream>
using namespace std;
int main() {
  //Comparison operator "==, !=, >, <, >=, <="
  //Logical operator " and &&, or ||, not !"
  int age;
  cout << "This program determines whenever or not you should drive a car \n";
  cout << "What is your age? \n";
  cin >> age;
  if ((age < 16) or (age > 99))
  {
    cout << "You shoudn't be driving a car! \n";
  }
  else
  {
    cout << "You can drive a car if you want! \n";
  }
  return 0;
}