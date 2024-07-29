#include <iostream>
using namespace std;

int main() {
  double temp [7];
  for (int l=0; l<7; l++)
    {
      cout << "Enter a temperature for the past 7 days: ";
      cin >> temp [l];
    }
  for (int l=1; l<7; l++)
    {
       if (temp[0] < temp [l])
       {
        temp [0] = temp [l];
       }
    }
  cout << endl << "The maximum temperature is " << temp [0];
    for (int l=1; l<7; l++)
    {
       if (temp[0] > temp [l])
       {
        temp [0] = temp [l];
       }
    }
    cout << endl << "The minimum temperature is " << temp [0];
  return 0;
}