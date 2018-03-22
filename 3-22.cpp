#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main() {

	srand(time(0));
	int number;
	int guess;
	int guesscount = 0;
	number = rand() % 100 + 1;

	do {

		cout << "Take a guess: ";
		cin >> guess;

		if (guess < number) {
			guesscount += 1;
			cout << '\n';
			cout << "Your guess is less than the number." << endl;
		}

		else if (guess > number) {
			guesscount += 1;
			cout << '\n';
			cout << "Your guess is more than the number." << endl;
		}

		else {
			guesscount += 1;
			cout << '\n';
			cout << "You won. Number is: " << number << endl;
			cout << "You took: " << guesscount << " amount of guesses." << endl;
		}

	} while (guess != number);
	system("PAUSE");

}