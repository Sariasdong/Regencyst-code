#include "test.h"
#include <iostream>
#include <string>
#include <stdio.h> 
#include <stdlib.h>    
#include <time.h>
#include <Checker.h>


using namespace std;
test::test()
{
	int guess(0);
	int iSecret;
	int wrong(0);
	int pause(0);
	const int MAXMISTAKES = 5;
	char ans;
	int min_value = 1;
	int max_value = 10;

	srand(time(NULL));	//initilizes random number
	iSecret = rand() % 10 + 1; //defines secret number

	printf("Guess a number between (1-10):\n");

	while ((wrong < MAXMISTAKES && guess != iSecret)) {
		cin >> guess;

		if ((guess >= min_value) && (guess <= max_value));

		else {
			cout << guess;
			Checker bo;
			cin.clear();
			cin.ignore(1000, '\n');
		}


		if (guess < iSecret & guess >= 1) {
			cout << "Your guess was low" << endl;
			++wrong;
		}

		if (guess > iSecret) {
			cout << "Your guess was too high" << endl;
			++wrong;
		}


		if (guess == iSecret) {
			cout << "Congrats, you're a winner" << endl;
			cout << "Would you like to try again?" << endl;

		}

		if (wrong == MAXMISTAKES) {

			cout << "Sorry, you're a loser?" << endl;
			cout << "Would you like to try again?" << endl;
		}
	}
}