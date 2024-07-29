#include <iostream>
using namespace std;

int main() {
  string random [4];
  for (int l=0; l<=3; l++)
  {
    cout << "What is the string you want to enter? ";
    cin >> random [l];
  }
  for (int l=0; l<=3; l++) 
  {
    cout << random [l] << endl; 
  }
  return 0;
}