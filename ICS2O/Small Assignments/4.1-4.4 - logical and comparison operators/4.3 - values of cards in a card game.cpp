#include <iostream>
using namespace std;
int main() {
  string card;
  cout << "This program will determine value of face cards in a game \n";
  cout << "What is your card (jack, queen, kind, ace)? \n";
  cin >> card;
  if ((card == "king") or (card == "queen") or (card == "jack"))
  {
    cout << "The value of the card is ten \n";
  }
  else if (card == "ace")
  {
    cout << "the value of the card is one or eleven \n";
  }
  return 0;
}