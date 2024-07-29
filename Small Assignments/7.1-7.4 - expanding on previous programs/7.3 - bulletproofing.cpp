#include <iostream>
using namespace std; 
int main() {
  char answer;
  bool invalid = true;
  while (invalid)
  {
    cout << "Enter 'a' or 'b' or 'c' 'd'. ";
    cin >> answer;
    if (answer == 'a' or answer == 'b' or answer == 'c' or answer == 'd')
    {
      cout << "This is a valid answer.";
      break;
    }
    else
    {
      cout << "Invalid. Try again. \n";
    }
  }
  return 0;
}