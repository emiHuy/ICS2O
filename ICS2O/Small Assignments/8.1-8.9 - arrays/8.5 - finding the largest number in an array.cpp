#include <iostream>
using namespace std;

int main() {
  int arr[5];
  for (int l=0; l < 5; l++)
  {
    cout << "Enter a number: ";
    cin >> arr[l];
  }
    for (int l=1; l<5; l++)
    {
       if (arr[0] < arr [l])
       {
        arr [0] = arr [l];
       }
    }
  cout << endl << "The biggest number entered was " << arr [0];
  return 0;
}