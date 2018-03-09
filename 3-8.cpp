#include <iostream>
using namespace std;

int PokeDmg(int x, int y, int z, int a, int n, int t, int g, int m, int b);

int main() {


	cout << "PokeDmg: " << PokeDmg(1, 50, 25, 50, 2, 1.5, 90, 1.5, 2) << endl;
	system("pause");

}

int PokeDmg(int x, int y, int z, int a, int n, int t, int g, int m, int b)
{
	int num;

	num = ((2 * x / 5 + 2) * ((y*m) * z) / (a*b) / 50 + 2) * (t*n*g) / 100;

	return num;


}