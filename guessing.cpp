// C program for the above approach
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

// Function that generate a number in
// the range [1, N] and checks if the
// generated number is the same as the
// guessed number or not
void guess(int N)
{
	int number, guess, numberofguess = 0;

	//Seed random number generator
	srand(time(NULL));

	// Generate a random number
	number = rand() % N;

	cout<<"Guess a number between 1 between 100\n";
    cin>>numberofguess;
		
	// Using a do-while loop that will
	// work until user guesses
	// the correct number
	do {

		if (numberofguess > 9) {
			cout<<"\nYou Loose!\n";
			break;
		}

		// Input by user
	     cin>>guess;

		// When user guesses lower
		// than actual number
		if (guess > number)

		{
			cout<<"Lower number please!\n"<<numberofguess++; 
				
		}

		// When user guesses higher
		// than actual number
		else if (number > guess)

		{
			cout<<"Higher number please!\n"<<numberofguess++;	
		}

		// Printing number of times
		// user has taken to guess
		// the number
		else
			cout<<"You guessed the number in attempts!\n"<<numberofguess;

	} while (guess != number);
}


int main()
{
	int N = 100;

	// Function call
	guess(N);

	return 0;
}
