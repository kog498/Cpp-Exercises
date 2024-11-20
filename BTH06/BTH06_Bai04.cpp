//Chuong trinh tinh tong tu 1 toi n va giai thua cua n
#include<iostream>
using namespace std;

//Input: n
void nhapDuLieu(int& n) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n < 1) cout << "n khong hop le! (n >= 1)\n";
	} while (n < 1);
}

//Output: Tinh tong cac so tu 1 toi n
int tinhTong(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}

//Output: Tinh giai thua cua n
int tinhGiaiThua(int n) {
	int giaiThua = 1;
	for (int i = 1; i <= n; i++) {
		giaiThua *= i;
	}
	return giaiThua;
}

int main() {
	//Khai bao bien
	int n;

	//Input
	nhapDuLieu(n);

	//Processing
	int tong = tinhTong(n);
	int giaiThua = tinhGiaiThua(n);

	//Output
	cout << "Tong: " << tong << endl;
	cout << "Giai thua: " << giaiThua << endl;
	return 1;
}