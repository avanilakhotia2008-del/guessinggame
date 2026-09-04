#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  char playagain = 'y';
  while(playagain == 'y'){
    int number = rand();
    int guess = 0;
    int guesses = 0;

    while(guess != number){
    cin >> guess;
    cout << guess << endl;

    return 0;

    }}
   

}
