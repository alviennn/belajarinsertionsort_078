#include <iostream>
using namespace std;

int array[20];
int n;

void input() {
	while (true) {
		cout << "masukkan jumlah data pada array";
		cin >> n;

		if (n <= 20) {
			break;
		}
	}
}