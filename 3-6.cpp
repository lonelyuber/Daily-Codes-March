#include <iostream>
using namespace std;

char foodDrop(char place);

int main() {

	while (1) {
		cout << "Desert = " << foodDrop('d') << endl;
		cout << "Forest = " << foodDrop('f') << endl;
		system("pause");
	}

}

char foodDrop(char place) {
		
	//forest food drop chance
	if (place == 'f') {
		int map = rand() % 2 + 1;
		if (map == 1)
			return 'm';
		else
			return 'b';
	}

	//desert food drop chance
	if (place == 'd') {
		int map = rand() % 100 + 1;
		if (map < 20)
			return 'b';
		if (map < 60)
			return 'f';
		else
			return 'c';
	}
}