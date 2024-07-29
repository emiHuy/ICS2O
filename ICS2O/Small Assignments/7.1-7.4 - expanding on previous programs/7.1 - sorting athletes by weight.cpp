#include <iostream>
using namespace std;
int main() 
{
  double weight;
  int heavy =0, middle=0, light=0;
  for (int x=1; x<=10; x=x+1)
  { 
    cout << "Please enter your weight in kg: ";
    cin >> weight;
    if (weight > 80)
    {
      heavy ++;
      cout << "You are heavyweight. \n";
    }
    else if (weight >=60 && weight <= 80)
    {
      middle ++;
      cout << "You are mediumweight. \n";
    }
    else
    {
      light ++;
      cout << "You are lightweight. \n";
    }
  }
  cout << "The number of athletes in the heavyweight category is: " << heavy << "\n";
  cout << "The number of athletes in the middleweight category is: " << middle << "\n";
  cout << "The number of athletes in the lightweight category is: " << light << "\n";
  return 0;
}