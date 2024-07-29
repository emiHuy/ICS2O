#include <iostream>
using namespace std;
int main() {
  int number;
  while (true)
  {
    double decimal [5] = {2.2, 7.7, 8.8, 6.6, 5.5};
    cout << "Which array element do you want to see (choose 0 up to 4)? ";
    cin >> number; 
    cout << "That data element is " << decimal [number] << endl; 
  }
  return 0;
}