#include <iostream>
using namespace std; 

int main() {
  char ten[26] = {'a','b','c', 'd','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char choice;
  int l;
  char empty[26]= {' '};
  while (true)
  {
    cout << "\nHere is a list of letters: ";
    for (int l=0; l<26; l++)
    {
      cout << ten[l] << ", ";
    }
    cout << "\nChoose a letter from the list: ";
    cin >> choice;
    for (l=0; l<26; l++)
    {
      if (choice == ten [l])
      {
        ten [l] = empty [l];
      }   
    }
  }
}