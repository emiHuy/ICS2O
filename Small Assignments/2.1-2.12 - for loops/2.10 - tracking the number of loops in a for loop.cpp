#include <iostream>
using namespace std; 
int main() {
  int numberloops=0;
  for (int r = 1 ; r<=10 ; r=r+1)
    {
      numberloops = numberloops+1;
    }
  cout << "The FOR loop went through " << numberloops << " loops";
  return 0;
}