//Chuong trinh tinh tong cac chu so cua so nguyen n
#include<iostream>
using namespace std;

//Input: n > 0
void nhapDuLieu(int& n) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0) cout << "n khong hop le! (n > 0)\n";
	} while (n <= 0);
}

//Output: Tong cac chu so cua so nguyen n
int tinhTong(int n) {
	int tong = 0;
	int tam = n;
	while (tam != 0) {
		tong += tam % 10;
		tam /= 10;
	}
	return tong;
}

int main() {
	//Khai bao bien
	int n;

	//Input
	nhapDuLieu(n);

	//Processing
	int tong = tinhTong(n);

	//Output
	cout << "Tong cac chu so cua " << n << " la " << tong << endl;
	return 1;
}