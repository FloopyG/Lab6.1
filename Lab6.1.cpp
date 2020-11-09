#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void Create(int* c, const int size, int min, int max, int i) {
	c[i] = min + rand() % (max - min + 1);
	if (i < size - 1) {
		Create(c, size, min, max, i + 1);
	}
}

void arrPrint(int* c, const int size, int i) {
	cout << setw(4) << c[i];
	if (i < size - 1)
		arrPrint(c, size, i + 1);
	else
		cout << endl;	
}

int arrSum(int* c, const int size, int i, int S) {
	if (i < size) {
		if (c[i] % 2 == 0 || i % 8 == 0) {
			S += c[i];
			c[i] = 0;
			return arrSum(c, size, i + 1, S);
		}
		else {
			return arrSum(c, size, i + 1, S);
		}
	}
	else
		return S;
}

int arrCount(int* c, const int size, int i, int z) {
	if (i < size) {
		if (c[i] == 0) {
			z++;
			return arrCount(c, size, i + 1, z);
		}
		else {
			return arrCount(c, size, i + 1, z);
		}
	}
	else {
		return z;
	}
}


int main()
{
	srand((unsigned)time(NULL));

	const int a = 25;

	int c[a];

	int Low = 5;
	int High = 90;

	Create(c, a, Low, High, 0);
	arrPrint(c, a, 0);
	cout << "S = " << arrSum(c, a, 0, 0) << endl;
	cout << "c[i] = 0 count: " << arrCount(c, a, 0, 0) << endl;
	arrPrint(c, a, 0);



	system("pause");
	cin.get();
	return 0;
}
