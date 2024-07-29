#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double area, radius, pi = 3.14;
  cout << "Enter the radius and hit enter: ";
  cin >> radius;
  area = pi * radius * radius;
  cout << "If the radius is " << radius << ", then the area is " << area << ".";
  return 0;
  }