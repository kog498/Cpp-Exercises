#include<iostream>

using namespace std;

// Ham nhap so nguyen n
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// Tinh tong cac chu so cua so nguyen n. Vi du: n = 324 -> tong = 3 + 2 + 4 = 9
int tinhTongChuSo(int n) {
	int tong = 0;
	while (n != 0) {
		tong += n % 10;
		n = n / 10;
	}
	return tong;
}

int main() {
	int n;
	nhapDuLieu(n);
	
	int tong = tinhTongChuSo(n);

	cout << "Tong cac chu so cua " << n << " la " << tong << endl;
	return 1;
}