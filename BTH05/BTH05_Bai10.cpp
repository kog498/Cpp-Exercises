#include<iostream>
using namespace std;

int main() {
	//Khai bao bien
	int n1, n2;
	int demChan = 0, demLe = 0, demUoc = 0;

	//Input
	do {
		cout << "Nhap n1 = "; cin >> n1;
		cout << "Nhap n2 = "; cin >> n2;
		if (n1 < 1 || n2 < 1 || n1 >= n2) cout << "Gia tri khong hop le! (n1, n2 >= 1 & n1 < n2)\n";
	} while (n1 < 1 || n2 < 1 || n1 >= n2);

	//Processing
	for (int i = n1; i <= n2; i++) {
		if (i % 2 == 0) demChan++;
		if (i % 2 != 0) demLe++;
		if (10 % i == 0) demUoc++;
	}

	//Output
	cout << "Chan: " << demChan << endl;
	cout << "Le: " << demLe << endl;
	cout << "Uoc cua 10: " << demUoc << endl;
	return 1;
}