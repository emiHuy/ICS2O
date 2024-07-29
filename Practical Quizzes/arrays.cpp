#include <iostream>
using namespace std; 
int main() {
  int Science [5], Math [5], English [5], sum;
  double average;
  string Name [5], Honour [5], Not [5], question;
  for (int l=0; l<5; l++)
  {
    cout << "Enter the name of the student: ";
    cin >> Name [l];
    cout << "Enter their math mark: ";
    cin >> Math [l];
    cout << "Enter their science mark: ";
    cin >> Science [l];
    cout << "Enter their English mark: ";
    cin >> English [l];
    sum = Math [l] + Science [l] + English [l];
    average = sum/3;
    if (average >= 80)
    {
      Honour [l] = Name [l];
    }
    else if (average <80)
    {
      Not [l] = Name [l];
    }
  }
  while (true)
  {
    cout << "\nDo you want to see the students who 'DID' or 'DID NOT' make the Honour Roll? ";
    cin >> question;
    if (question == "DID")
    {
      for (int l=0; l<5; l++)
      {
        cout << Honour [l] << ", ";
      }
    }
    else if (question == "DIDNOT")
    {
       for (int l=0; l<5; l++)
      {
        cout << Not [l] << ", ";
      }
    }
    else if (question == "stop")
    {
      break;
    }
  }
  cout << "Good bye!";
}