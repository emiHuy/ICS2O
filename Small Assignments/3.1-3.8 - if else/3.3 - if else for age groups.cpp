#include <iostream>
using namespace std;
int main() {
  int age;
  cout << "This program will determine the ticket price. \n";
  cout << "that you will pay at the movie theatre. \n";
  cout << "Everyone 55 or older is a senior. \n";
  cout << "What is your age? ";
  cin >> age;
  if (age >=65)
  {
    cout << "You are a senior so you are free. \n";
  }
  else
  {
    cout << "You are not a senior so you must pay $10. \n";
  }
  return 0;
}