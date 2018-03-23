#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

int main() {

	cout << "Rock, Paper, Scissors." << endl;

	int win = 0;
	int tie = 0;
	int lose = 0;
	int pick = 0;
	int ai = rand() % 3 + 1;

	cout << "Press 1 for rock" << endl;
	cout << "Press 2 for paper" << endl;
	cout << "Press 3 for scissors" << endl;
	cin >> pick;

	if (pick == 1 && ai == 1) {
		cout << "Rock v Rock" << endl;
		cout << "Tie." << endl;
		tie++;
	}
	else if (pick == 1 && ai == 2) {
		cout << "Rock v Paper" << endl;
		cout << "You lose." << endl;
		lose++;
	}
	else if (pick == 1 && ai == 3) {
		cout << "Rock v Scissors" << endl;
		cout << "You win." << endl;
		win++;
	}
	else if (pick == 2 && ai == 1) {
		cout << "Paper v Rock" << endl;
		cout << "You win." << endl;
		win++;
	}
	else if (pick == 2 && ai == 2) {
		cout << "Paper v Paper" << endl;
		cout << "Tie." << endl;
		tie++;
	}
	else if (pick == 2 && ai == 3) {
		cout << "Paper v Scissors" << endl;
		cout << "You lose." << endl;
		lose++;
	}
	else if (pick == 3 && ai == 1) {
		cout << "Scissors v Rock" << endl;
		cout << "You lose." << endl;
		lose++;
	}
	else if (pick == 3 && ai == 2) {
		cout << "Scissors v Paper" << endl;
		cout << "You win." << endl;
		win++;
	}
	else if (pick == 3 && ai == 3) {
		cout << "Scissors v Scissors" << endl;
		cout << "Tie" << endl;
		tie++;
	}
	// this is what happens if the player doesn't hit 1 2 or 3
	else {
		cout << "Input 1, 2, or 3 instead." << endl;
	}


}