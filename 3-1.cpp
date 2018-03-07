#include <iostream>
using namespace std;

int main() {

	int input = 0;//dummy value


	while (input <= 0 || input > 9) {
		cout << "Input a number: " << endl;
		cin >> input;
	}


	cout << "The total sum is = ";
	if (input == 1)
		cout << input + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 << endl;
	if (input == 2)
		cout << input + 1 + 3 + 4 + 5 + 6 + 7 + 8 + 9 << endl;
	if (input == 3)
		cout << input + 1 + 2 + 4 + 5 + 6 + 7 + 8 + 9 << endl;
	if (input == 4)
		cout << input + 1 + 2 + 3 + 5 + 6 + 7 + 8 + 9 << endl;
	if (input == 5)
		cout << input + 1 + 2 + 3 + 4 + 6 + 7 + 8 + 9 << endl;
	if (input == 6)
		cout << input + 1 + 2 + 3 + 4 + 5 + 7 + 8 + 9 << endl;
	if (input == 7)
		cout << input + 1 + 2 + 3 + 4 + 5 + 6 + 8 + 9 << endl;
	if (input == 8)
		cout << input + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 9 << endl;
	if (input == 9)
		cout << input + 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 << endl;
	

	int sum = 0;
	for (int i = 0; i <= input + 1; i++) {
	
		sum += i;
		cout << "added " << i << " sum is now " << sum << endl;;
	}

	cout << "mo's sum is " << sum << endl;
	system("pause");


}