#include<iostream>
using namespace std;

int main() {
	//Khai bao bien
	int h;

	//Input
	do {
		cout << "Nhap chieu cao = "; cin >> h;
		if (h < 1) cout << "Chieu cao khong hop le! (h >= 1)\n";
	} while (h < 1);

	//Processing & Output
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "*";
		}
		cout << endl;
	}
	return 1;
}