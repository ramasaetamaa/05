#include <iostream>

using namespace std;

int main()
{
	int bil;

	cout << "Menampilkan Deret Bilangan Prima 1-100";
	cout << endl;

	for (int x = 1; x <= 100; x++) {
		bil = 0;
		for (int y = 1; y <= x; y++) {
			if (x % y == 0) {
				bil = bil + 1;
			}
		}
		if (bil == 2)
			cout << x << " ";
	}


	system("pause");

	return 0;
}