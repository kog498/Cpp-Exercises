#include<iostream>

using namespace std;

// Ham nhap du lieu
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// Cau a
int tinhTong(int n) {
	int tong = 0;
	for (int i = 1; i <= n; i++) {
		tong += i;
	}
	return tong;
}

// Cau b
int tinhGiaiThua(int n) {
	if (n == 0) return 1;
	return n * tinhGiaiThua(n - 1);
}

int main() {
	int n;
	nhapDuLieu(n);

	int tong = tinhTong(n);
	int giaiThua = tinhGiaiThua(n);
	cout << "Tong = " << tong << endl;
	cout << "Giai thua = " << giaiThua << endl;
	return 1;
}