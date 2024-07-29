#include <iostream>
using namespace std;
int main() {
  char choice;
  cout << "Want to play rock, paper, scissors> enter 'r' or 'p' or 's' ";
  cin >> choice;
  if (choice == 'r')
  {
    cout << "You chose ROCK! ";
  }
  else if (choice == 'p')
  {
    cout << "You chose PAPER!";
  }
  else if (choice == 's')
  {
    cout << "You chose SCISSORS!";
  }
  else
  {
    cout << "You chose an incorrect selection. ";
  }
  return 0;
}