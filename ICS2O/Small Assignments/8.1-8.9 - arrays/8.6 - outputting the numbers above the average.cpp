#include <iostream>
using namespace std;

int main() {
  double average = 0; 
  int arr [7], sum=0;
  for (int l=0; l<7; l++)
  {
    cout << "Enter a number: ";
    cin >> arr [l];
    sum = sum + arr[l];
  }
  average = sum/7;

  cout << "\nThe following numbers are bigger than the average:\n";
  for (int l=0; l<7; l++)
  {
    if (average < arr [l])
    {
        cout << arr[l] << "\n";
    }
  }
  return 0;
  
}