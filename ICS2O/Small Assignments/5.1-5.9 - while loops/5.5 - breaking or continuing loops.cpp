#include <iostream>
using namespace std;
int main() {
  bool loop = true;
  char user;
  while (loop)
  {
    cout << "Would you like to quit the loop (y or n)? \n";
    cin >> user;
    if (user == 'y' )
    {
      cout << "Ok will quit \n";
      loop = false;
      // or 'break;'
    }
    else if (user == 'n')
    {
      cout << "Ok will we keep going \n";
    }
  }
  cout << "Good bye";
  return 0;
}