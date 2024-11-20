#include<iostream>
using namespace std;

int main() {
	int n;
	do {
		cout << "Nhap n = "; cin >> n;
		if (n <= 0) cout << "n khong hop le! (n > 0)\n";
	} while (n <= 0);

	int tong = 0;

	for (int i = 1; i <= n; i++) {
		tong += i;
	}

	cout << "Tong = " << tong << endl;
	return 1;
}
