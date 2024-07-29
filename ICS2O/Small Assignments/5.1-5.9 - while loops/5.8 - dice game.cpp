#include <iostream>
using namespace std;
int main() 
{
  int dice1, dice2, sum;
  bool roll = true;
  while (roll)
  {
    cout << "Enter the value of dice 1: ";
    cin >> dice1;
    cout << "Enter the value of dice 2: ";
    cin >> dice2;
    sum = dice1 + dice2;
    if (sum ==7 or sum ==11)
    {
      cout << "You win!";
      roll = false;
    }
    else if (dice1 == dice2)
    {
      cout << "You lose.";
      roll = false;
    }
    else
    {
      cout << "Roll again\n";
    }
  }
  return 0;
}