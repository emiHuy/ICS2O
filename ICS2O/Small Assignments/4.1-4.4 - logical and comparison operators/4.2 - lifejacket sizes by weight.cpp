#include <iostream>
using namespace std;
int main() {
  int weight;
  cout << "This program determines the size of a lifejacket. \n";
  cout << "What is your weight? \n";
  cin >> weight;
  if (weight >= 200)
  {
    cout << "You will need an extra large lifejacket \n";
  }
  else if (weight >= 175 and weight <200)
  {
    cout << "You will need a large lifejacket \n";
  }
  else if (weight >=145 and weight <175)
    {
    cout << "You will need a medium lifejacket \n";
    }
  else if (weight <145)
  {
    cout << "You will need a small lifejacket \n";
  }
  return 0;
}