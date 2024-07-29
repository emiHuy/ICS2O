#include <iostream>
using namespace std;

int main() {
  int mark;
  cout << "Enter your mark percentage: ";
  cin >> mark;
  if (mark >= 90)
  {
    cout << "Congratulations, you will receive a gold medal";
  }
  else if (mark >= 80)
  {
    cout << "Congratulations, you will receive a silver medal";
  }
  else
  {
    cout << "Sorry but you do not reveive a medal";
  }
  return 0;
}