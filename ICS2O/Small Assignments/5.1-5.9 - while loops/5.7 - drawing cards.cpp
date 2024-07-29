#include <iostream>
using namespace std;
int main() {
  std :: string card;
  bool draw = true;
  while (draw)
    {
      cout << "Enter the card name (jack, queen, king, or ace): ";
      cin >> card;
      if (card == "jack" or card == "queen" or card == "king")
      {
        cout << "Draw another card \n";
      }
      else if (card == "ace")
      {
        cout << "Sorry, you lose";
        break;
      }
    }
  return 0;
}