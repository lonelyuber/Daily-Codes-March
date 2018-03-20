#include <iostream>
using namespace std;

char MinecraftEnemy(char type);

int main() {

	while (1) {

		cout << "enemy is: " << MinecraftEnemy('type') << endl;
		system("pause");

	}
}

char MinecraftEnemy(char type) {

	//forest food drop chance
	int enemy = rand() % 100 + 1;
	if (enemy < 30)
		return 's';
	if (enemy > 31 && enemy < 50)
		return 'c';
	else
		return 'z';
}