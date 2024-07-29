//Inputting first and last names separately, then outputting them on same line
#include <iostream>
using namespace std;
int main() {
  string firstname, lastname;
  cout << "Enter first name and hit enter: ";
  cin >> firstname;
  cout << "Enter last name and hit enter: ";
  cin >> lastname;
  cout << "\n\nName: " << firstname << " "<< lastname;
  return 0;
}