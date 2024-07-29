#include <iostream>
#include <cmath>
using namespace std;
int main() {
  double h=3, t, second;
  for (double t=0; h>=0; t=t+0.1)
    {
      h=-0.163*t*t+3*t+3;
      cout << "height: " <<floor (h*10)/10 << " seconds: " << t << "\n";
    }
  return 0;
}