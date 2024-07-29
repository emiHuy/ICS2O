//This program will determine output your levels
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  //variables for counting the amount of marks in each level
  int two=0, three=0, four=0, r=0, one=0;
  //variable for individual marks
  double score;
  //Will repeat 10 tims to enter 10 different marks
  for (int x=1; x<=10 ; x=x+1)
  {
    cout << "Enter your mark: ";
    cin >>score;
    //If mark is greater than 0 or smaller than 50, it will out put a level R add one to level R variable
    if (score <50 and score>=0)
    {
      cout << "You achieved a level R\n";
      r++;
    }
    //If mark is greater than or equal to 50 and equal to or smaller than 59, it will output a level 1 add one to level 1 variable
    else if (score >= 50 and score <=59)
    {
      cout << "You achieved a level 1 \n";
      one++;
    }
    // If mark is greater than or equal to 60 and smaller than or equal to 69, it will output a level 2 add one to level 2 variable
    else if (score >= 60 and score <= 69)
    {
      cout << "You achieved a level 2\n";
      two ++;
    }
      //If mark is between 70 and 79, it will output a level 3 and add one to level 3 variable
    else if (score >= 70 and score <= 79)
    {
      cout << "You achieved a level 3\n";
      three++;
    }
      //If mark is between 80 and 100, it will output a level 4 and add one to level 4 variable
    else if (score >=80 and score <= 100)
    {
      cout << "You achieved a level 4\n";
      four++;
    }
      //If mark is none of the above, lower than 0 and higher than 100, it will be invalid
    else  
    {
      cout << "This mark is invalid\n";
    }
  }
  cout << "The number of level 1 marks was: " << one << "\n";
  cout << "The number of level 2 marks was: " << two << "\n";
  cout << "The number of level 3 marks was: " << three << "\n";
  cout << "The number of level 4 marks was: " << four << "\n";
  cout << "The number of level R marks was: " << r << "\n";
  return 0;
}
 