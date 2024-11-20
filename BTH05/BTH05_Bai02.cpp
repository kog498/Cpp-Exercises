#include<iostream>
using namespace std;

int main() {
	int m;
	do {
		cout << "Ban can bao nhieu so: "; cin >> m;
		if (m < 1) cout << "So khong hop le! (so >= 1)\n";
	} while (m < 1);

	int n, tong = 0;
	for (int i = 1; i <= m; i++) {
		cout << "Nhap so thu " << i << ": "; cin >> n;
		tong += n;
	}

	cout << "Tong = " << tong << endl;
	return 1;
}