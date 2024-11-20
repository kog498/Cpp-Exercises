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

	//Processing & Processing
	for (int i = 1; i <= 10; i++) {
		cout << n << " x " << i << " = " << n * i << endl;
	}
	return 1;
}