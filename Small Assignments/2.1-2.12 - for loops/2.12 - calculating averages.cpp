#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int number, score;
  double sum, average;
  cout << "Number of test scores: ";
  cin >> number;
  for (int x=1; x<=number; x=x+1)
    {
      cout << "Enter the test score: ";
      cin >>score;
      sum = sum + score;
    }
  average = sum/number;
  cout << "The average test score is " << 
    floor(average*100)/100;
  return 0;
}
  