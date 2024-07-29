#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double diameter, radius, shaded, circle, square;
  cout << "Welcome! This program will calculate the shaded area of the region. \nWhat is the diameter for the small white circle? ";
  cin >> diameter;
  radius = diameter/2;
  circle = 3.14*radius*radius*4;
  square = 2*diameter*2*diameter;
  shaded = square - circle;
  cout << "The total shaded area is " << floor (shaded*10)/10 << " square units.";
  return 0;
}