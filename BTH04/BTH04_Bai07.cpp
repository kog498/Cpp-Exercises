#include<iostream>

using namespace std;

// Ham nhap du lieu
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// De bai
bool laSoNguyenTo(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	nhapDuLieu(n);

	bool ketQua = laSoNguyenTo(n);
	if (ketQua == true) {
		cout << n << " la so nguyen to!\n";
	}
	else {
		cout << n << " khong la so nguyen to!\n";
	}
	return 1;
}