#include <iostream>
using namespace std; 
int main() {
  char answer;
  bool invalid = true;
  while (invalid)
  {
    cout << "Enter 'y' or 'n'. ";
    cin >> answer;
    if (answer == 'y' or answer == 'n')
    {
      cout << "This is a valid answer.";
      break;
    }
    else
    {
      cout << "Invalid. \n";
    }
  }
  return 0;
}