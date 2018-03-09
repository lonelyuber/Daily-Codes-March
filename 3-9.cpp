#include <iostream>
using namespace std;

void RandomColor();

int main() {

	while (true) {

		RandomColor();

		system("pause");

	}
}

void RandomColor()
{
	int color = rand() % 4 + 1;

	switch (color)
	{

	case 1:
		system("COLOR A1");
		break;

	case 2:
		system("COLOR F2");
		break;

	case 3:
		system("COLOR B3");
		break;

	}
}