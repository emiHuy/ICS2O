#include <iostream>
using namespace std;
int main() {
  std :: string colour;
  bool incorrect = true;
  while (incorrect)
  {
    cout << "What is the colour of the sky? \n";
    cin >> colour;
    if (colour == "blue") {
      cout << "Yes the sky is blue! \n";
    incorrect = false;
    }
    else {
      cout << "That is incorrect \n";
    }
  }
  cout << "Good bye";
  return 0;
}