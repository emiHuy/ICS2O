//If 173 cm or taller, it outputs taller. If less tahn 173 cm, it outputs average or shorter.
#include <iostream>
using namespace std;
int main() {
  double height;
  cout << "What is your height in cm? ";
  cin >> height;
  if (height >= 173)
  {
    cout << "You are taller than the average. \n";
  }
  else
  {
    cout << "You are average height or shorter. \n";
  }
  return 0;
}