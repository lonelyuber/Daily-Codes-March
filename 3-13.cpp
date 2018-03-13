#include <iostream>
using namespace std;

int main() {

	int array[7];
	bool Five = false;

	cout << "Enter 7 numbers: " << '\n';

	for (int i = 0; i < 7; i++)
		cin >> array[i];

	for (int i = 0; i < 7; i++)
		if (array[i] == 5)
			Five = true;

	if (Five == true)
		cout << "Secret Message" << '\n';

	else
		cout << "Nice numbers man" << '\n';

}