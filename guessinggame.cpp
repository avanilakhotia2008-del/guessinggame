/*
Avani Lakhotia

09/09/2026

GUessing game is a game where the computer choses a random value between 1-100 and the user is supposed to guess it.

1. No global variables. (Global constants are all right.)
2. No strings. Not ever. (You can use cstrings/character arrays, and the cstring an\
d cctype libraries are okay. In fact, I recommend using strcmp and strlen in your p\
rojects.)
3. You should include <iostream>, not stdio. (This applies more to C programmers.) \
Also, use "new" and "delete" instead of "malloc" and "free".



*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
  srand(time(NULL));
  char playagain = 'y'; //sets up the play again 
  cout << "Welcome to Guessing Game! The computer has chosen a random number between 1-100 and your job is to guess it, the computer will let you know if your number is too high or too low. " << endl;
  while(playagain == 'y'){
    int number = rand() %101; // lets you pick values between 0-100
    int guess = 0;
    int guesses = 0; //guesses count
    time_t startTime = time(NULL); //timer
  
    while(guess != number){
      cout << "Enter your guess: " <<endl;
      cin >> guess; //takes user guess input

      // to validate if the user has put in a number and not a letter (I did search how to do this part on google as I didn't know how it works in c++):
 

      if (cin.fail()) { // checks if the reading interger failed
	cout << "Enter a valid number" << endl;
	cin.clear(); // resets the error so the cin can work
	cin.ignore(1000, '\n'); // gets rid of the letters they had types 
	continue;
      }

      guesses ++; //guess counter goes up



      //if else statements to check if the number is too high or too low or right
      if (guess > number){  
	cout << "Your number is too high" << endl;
	cout << "Try entering a number lower than this" << endl;
      }
      else if (guess < number) {
	cout << "Your number is too low" << endl;
	cout << "Try entering a number higher than this" << endl;
      }
      else if (guess == number){
	cout << "Yayayyayayayayay, you have guessed it correctly! " << endl;
	cout << "You took " << guesses<< " guesses to get to your answer!" << endl;

	// counts the time 
	time_t endTime = time(NULL);
	int totalTime = endTime - startTime;
	cout << "Time: " << totalTime << " seconds" <<endl;
	break;

      }

    }

    cout << "Do you want to play again? (y/n): ";
    cin >> playagain; 
    


  }

  cout << "Thank you for playingg!" << endl; 
  return 0; //ends 
   

}
