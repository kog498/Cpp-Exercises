#include<iostream>

using namespace std;

// Ham nhap so nguyen n
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// Kiem tra so doi xuong. VD: 512215 la so doi xung (So dao nguoc)
bool laSoDoiXung(int n) {
	int soDaoNguoc = 0;
	int tam = n;
	while (tam != 0) {
		soDaoNguoc = soDaoNguoc * 10 + tam % 10;
		tam = tam / 10;
	}
	return n == soDaoNguoc;
}

int main() {
	int n;
	nhapDuLieu(n);
	bool ketQua = laSoDoiXung(n);
	if (ketQua == true) {
		cout << n << " la so doi xung!\n";
	}
	else {
		cout << n << " khong la so doi xung!\n";
	}
	return 1;
}