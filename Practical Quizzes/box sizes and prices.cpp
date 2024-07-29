#include <iostream>
using namespace std;

int main() {
  double length, width, height, volume;
  cout << "Welcome to BoxesRUS. We make custome boxes! \n";
  cout << "What is the length of the box in cm? ";
  cin >> length;
  cout << "What is the width of the box in cm? ";
  cin >> width;
  cout << "What is the height of the box in cm? ";
  cin >> height;
  volume = height * width * length;
  cout << "The volume of the box is " << volume << " cubic centimeters \n";
  if (volume <100 and volume >0)
  {
    cout << "This is a small box and will cost $7.99";
  }
  else if (volume >= 100 and volume <200)
  {
    cout << "This is a medium box and will cost $9.99";
  }
  else if (volume >= 200 and volume <=300)
  {
    cout << "This is a large box and will cost $12.99";
  }
  else if (volume >300)
  {
    cout << "You cannot make a box this big.";
  }
  return 0;
}