#include <iostream>
using namespace std;

int main() {
  int x, total=0;
  for (int x=2; x<100; x=x+2)
    {
      total = total + x;
    }
  cout << total;
  return 0;
}