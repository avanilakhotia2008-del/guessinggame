#include <iostream>

using namespace std;

int main()
{
  int input = 0;
  cin >> input;

  if (input == 3 || input == 6)
    {
      cout << "You put in a 3 or 6 or both!" << endl;
    }
  else ig (input >= 4 && input <= 7){
      cout << "You put in a number between 4 and 7!" << endl;
    }

  else {
    cout << "you put in a diff number" <<endl;
  }

  switch (input){
  case 3: cout << "You put in a 3!" << endl;
    break
  case 4: cout << "You put in a 4!" << endl;
    break
  default: cout << "you enetered something else" << endl;
  }
  
  cout << input << endl;
  return 0; 

}
