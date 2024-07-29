#include <iostream>
using namespace std; 

int main() {
  string ten[10] = {"1","2","3","4","5","6","7","8","9","10"}, choice;
  int l;
  string empty[10]= {" "};
  while (true)
  {
    cout << "\nHere is a list of numbers: ";
    for (int l=0; l<10; l++)
    {
      cout << ten[l] << ", ";
    }
    cout << "\nChoose a number from the list: ";
    cin >> choice;
    for (l=0; l<10; l++)
    {
      if (choice == ten [l])
      {
        ten [l] = empty [l];
      }   
    }
  }
}