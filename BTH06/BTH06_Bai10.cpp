//Chuong trinh kiem tra so hoan thien
#include<iostream>
using namespace std;

//Input: n > 0
void nhapDuLieu(int& n) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0) cout << "n khong hop le! (n > 0)\n";
	} while (n <= 0);
}

//Output: Ket qua kiem tra so hoan thien
bool isHoanThien(int n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) tong += i;
	}
	return tong == n;
}

int main() {
	//Khai bao bien
	int n;

	//Input
	nhapDuLieu(n);

	//Processing
	bool flag = isHoanThien(n);

	//Output
	if (flag) {
		cout << n << " la so hoan thien!\n";
	}
	else {
		cout << n << " khong la so hoan thien!\n";
	}
	return 1;
}