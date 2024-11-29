#include<iostream>

using namespace std;

// Ham nhap so nguyen n
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// Kiem tra so hoan thien. Vi du: 6 = 1 + 2 + 3 (So hoan thien), 8 != 1 + 2 + 4 (Khong phai)
bool laSoHoanThien(int n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) tong += i;
	}
	if (tong == n) {
		return true;
	}
	return false;
}

int main() {
	int n;
	nhapDuLieu(n);
	bool ketQua = laSoHoanThien(n);
	if (ketQua == true) {
		cout << n << " la so hoan thien\n";
	}
	else {
		cout << n << " khong la so hoan thien!\n";
	}
	return 1;
}