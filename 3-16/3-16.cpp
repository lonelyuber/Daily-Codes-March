#include <iostream>
#include <string>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

char Map();

int main() {

	string userinput;

	cout << "Fallout Shelter Rooms." << endl;
	system("pause");
	system("CLS");

	// Rooms
	char input = 'A';
	int room = 0;
	while (input != 'B') {
		switch (room) {

		case 0: // Living Quarters
			cout << "*Location - Living Quarters" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;

			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;

		case 1: // Elevator 1
			cout << "*Location - Elevator 1" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;
			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;

		case 2: // Elevator 2
			cout << "*Location - Elevator 2" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;
			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;

		case 3: // Elevator 3
			cout << "*Location - Living Quarters" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;
			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;

		case 4: // Power Generator
			cout << "*Location - Power Generator" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;
			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;

		case 5: // Diner
			cout << "*Location - Diner" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;
			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;

		case 6: // Water Treatment
			cout << "*Location - Water Treatment" << endl;
			cout << endl;
			cout << "Use 'map'." << endl;
			getline(cin, userinput); {
				Sleep(1);

				if (userinput.compare("living quarters") == 0)
					room = 0;
				if (userinput.compare("elevator 1") == 0)
					room = 1;
				if (userinput.compare("elevator 2") == 0)
					room = 2;
				if (userinput.compare("elevator 3") == 0)
					room = 3;
				if (userinput.compare("power generator") == 0)
					room = 4;
				if (userinput.compare("diner") == 0)
					room = 5;
				if (userinput.compare("water treatment") == 0)
					room = 6;

				if (userinput.compare("map") == 0)
					cout << Map();
				system("pause");
			}
			break;
		}
	}
}

char Map()
{
	cout << endl;
	cout << "Living Quarters" << endl;
	cout << "Elevator 1" << endl;
	cout << "Elevator 2" << endl;
	cout << "Elevator 3" << endl;
	cout << "Power Generator" << endl;
	cout << "Diner" << endl;
	cout << "Water Treatment" << endl;
	cout << endl;

	return 0;
}