#include <iostream>
using namespace std;
int main() 
{
  int age;
  string level;
  while (true)
  {
    New:
    cout << "Welcome to Club Badminton Ottawa! This program will determine your registration fees for the upcoming season.";
    cout << "\nWhat is your age? ";
    cin >> age;
    if (age < 0)
    {
      break;
    }
    else if (age < 13 or age > 18)
    {
      cout <<"You are too old or too young for our league.\n\n";
      goto New;
    }
    Again:
    cout << "Do you want to play recreational or competitive? (enter 'rec' or 'comp') ";
    cin >> level;
    if (level != "rec" and level != "comp")
    {
      cout << "You did not enter 'rec or 'comp'\n";
      goto Again;
    }
    if (age ==13 or age ==14)
    {
      if (level == "rec")
      {
        cout << "Your fees for the upcoming year will be $350\n\n";
      }
      else if (level == "comp")
      {
        cout << "Your fees for the upcoming year will be $550\n\n";
      }
    }
    else if (age == 15 or age == 16)
    {
      if (level == "rec")
      {
        cout << "Your fees for the upcoming year will be $460\n\n";
      }
      else if (level == "comp")
      {
        cout << "Your fees for the upcoming year will be $660\n\n";
      }
    }
    else if (age == 17 or age == 18)
    {
      if (level == "rec")
      {
        cout << "Your fees for the upcoming year will be $570\n\n";
      }
      else if (level == "comp")
      {
        cout << "Your fees for the upcoming year will be $770\n\n";
      }
    }
   }
  cout << "Good bye!";
  return 0;
}