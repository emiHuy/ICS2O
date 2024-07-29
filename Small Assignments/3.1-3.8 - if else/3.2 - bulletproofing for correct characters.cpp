#include <iostream>
using namespace std;
int main() {
  char answer;
  cout << "Are you going to the movies? (y or n) ";
  cin >> answer;
  if (answer == 'y')
  {
    cout << "Glad to hear you are going!! \n";
  }
  else if (answer == 'n')
  {
    cout << "Too bad you are not going. \n";
  }
  else
  {
    cout << "You did not enter 'y' or 'n'. \n";
  }
  return 0;
}