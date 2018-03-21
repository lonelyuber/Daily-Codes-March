#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int main() {
	srand(time(NULL));
	int i = rand() % 5 + 1;
	int j = rand() % 5 + 1;

	cout << "Rap name generator" << endl;
	system("pause");

	string firstname[5] = { "Lil", "Young", "Mob", "Jay", "Dr." };

	string lastname[5] = { "Gucci", "Kickz", "Kidd", "Bop", "Boss" };


	cout << firstname[i] << " " << lastname[j] << endl;

}