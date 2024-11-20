#include<iostream>
using namespace std;

int main() {
	//Khai bao bien
	int d, r;

	//Input
	do {
		cout << "Nhap chieu dai = "; cin >> d;
		if (d < 1) cout << "Chieu dai khong hop le! (d >= 1)\n";
	} while (d < 1);
	do {
		cout << "Nhap chieu rong = "; cin >> r;
		if (r < 1) cout << "Chieu rong khong hop le! (r >= 1)\n";
	} while (r < 1);

	//Processing & Output
	for (int i = 1; i <= d; i++) {
		for (int j = 1; j <= r; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 1;
}