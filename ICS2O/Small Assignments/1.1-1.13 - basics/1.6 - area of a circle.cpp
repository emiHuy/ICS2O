//Calculating area of circle with diameter input
#include <iostream>
using namespace std;
int main() {
  double diameter, radius, area;
  cout << "Enter the diameter of the circle and hit enter: ";
  cin >> diameter;
  radius = diameter/2;
  area = 3.14 * radius * radius;
  cout << "The area of the circle is " << area;
  return 0;
}