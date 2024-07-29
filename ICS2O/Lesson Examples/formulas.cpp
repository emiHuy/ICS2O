//Calculating the volume of a cone with inputs
#include <iostream>
using namespace std;
int main() {
  double radius, height, volume;
  cout << "Enter the radius of the base of the cone: ";
  cin >> radius;
  cout << "Enter the height of the cone: ";
  cin >> height;
  volume = (3.14 * radius * radius * height)/3;
  cout << "The volume of the cone is " << volume;
  return 0;
}
