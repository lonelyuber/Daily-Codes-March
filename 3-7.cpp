#include <iostream>
using namespace std;

int Knockback(int d, int p, int w, double s, int b, double r);

int main() {


	cout << "Knockback: " << Knockback(75, 15, 100, 1, 20, 1.2) << endl;
	system("pause");


}


int Knockback (int d, int p, int w, double s, int b, double r)
{
	int num;
	num = ((((7 * (d + 2) * (d + p) / (w + 100) + 9)) * 2 * s) + b) * r;

	return num;
}