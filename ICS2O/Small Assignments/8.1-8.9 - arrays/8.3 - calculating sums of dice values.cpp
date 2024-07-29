#include <iostream>
using namespace std; 
int main() {
  int dice1 [5], dice2 [5];
  while (true)
  {
    for (int l=0; l<=4; l++)
    {
      cout << "\nWhat is the first dice value? "; 
      cin >> dice1 [l];
      cout << "What is the second dice value? ";
      cin >> dice2 [l]; 
    }
    cout << "\nThe sum of the two dice are: " << dice1[0] + dice2 [0] << ", " << dice1[1] + dice2 [2] << ", " << dice1[2] + dice2 [2] << ", " << dice1[3] + dice2 [3] << ", " << dice1[4] + dice2 [4] << "\n\n";
    break;
  }
  return 0;
}