#include <iostream>
#include <cstdlib>
#include <Windows.h>
using namespace std;

// Declare
int Pointless(int m, int n);

int main() {

	cout << "Pick two numbers" << endl;
	int num1;
	int num2;
	int Sum;
	cin >> num1 >> num2;

	// Call Function
	Sum = Pointless(num1, num2);
	cout << "Sum = " << Sum << endl;

}


// Define Function
int Pointless(int m, int n)
{
	for (int i = 1; i < m; i++) {
		for (int i = 1; i < n; i++)
			cout << "*";
		cout << endl;

	}
	cout << m*n << endl;
	Beep(m, n * 100);

	return m + n;
}
