#include <iostream>
#include <string>
using namespace std;

int main() {

	string Food[5];
	bool taco = false;

	cout << "What's your top 5 favorite food?" << '\n';
	cout << "Input 5 different kinds of food: " << '\n';

	for (int i = 0; i < 5; i++)
		getline(cin, Food[i]);

	for (int i = 0; i < 5; i++)
		if (Food[i] == "taco")
			taco = true;

	if (taco == true)
		cout << "nice you picked tacos" << endl;

	else {
		cout << "sorry pal." << '\n';
		cout << "you didn't pick taco." << '\n';

}
}