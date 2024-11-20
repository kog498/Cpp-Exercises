#include<iostream>
using namespace std;

int main() {
	//Khai bao bien
	int n;
	int tong = 0;

	//Input
	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 1) cout << "n khong hop le! (n >= 1)\n";
	} while (n < 1);

	//Processing
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) tong += i;
	}

	//Output
	cout << tong << endl;
	return 1;
}