#include <iostream>
using namespace std;
int main() {
  int numberloops;
  cout << "How many times do you want the loop to run? ";
  cin >> numberloops;
  for (int r=1; r<=numberloops ; r=r+1)
    {
      cout << "Hello! \n";
    }
  return 0;
}