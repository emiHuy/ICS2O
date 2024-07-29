#include <iostream>
using namespace std; 
int main() {
  string character [5] = {"Jeno", "Lucas", "Amelia", "STD", "Deez"}, guess;
  int score;
  
    for (int l=0; l<5; l++)
    {
      cout << "Guess character " << l << ": "; 
      cin >> guess;
      if (guess == character [l])
      {
        cout <<"You guess correctly!\n\n";
        score ++;
      }
      else 
      {
        cout << "You guessed incorrectly\n\n";
      }
    }
  cout <<"Score: " <<score;
  return 0;
}