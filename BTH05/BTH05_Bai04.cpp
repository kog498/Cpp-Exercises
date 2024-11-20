#include<iostream>
using namespace std;

int main() {
	//Khai bao bien
	int n;

	//Input
	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 1) cout << "n khong hop le! (n >= 1)\n";
	} while (n < 1);

	//Processing
	int giaiThua = 1;
	for (int i = 1; i <= n; i++) {
		giaiThua = giaiThua * i;
	}

	//Output
	cout << n << "! = " << giaiThua << endl;
	return 1;
}