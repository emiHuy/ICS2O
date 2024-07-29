#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int sum;
  double score, average;
  for (int x=1; x<=5 ; x=x+1)
  {
    cout << "Enter the mark: ";
    cin >>score;
    sum = sum + score;
  }
  average = sum/5;
 
  cout << "Overall Grade: "<<average << "%\n";
  if (average >= 70)
  {
    cout << "GOOD WORK!";
  }
  else if (average >= 50)
  {
    cout << "I KNOW YOU CAN IMPROVE";
  }
  else
  {
    cout << "YOU SHOULD REALLY GET A TUTOR.";
  }
  return 0;
}