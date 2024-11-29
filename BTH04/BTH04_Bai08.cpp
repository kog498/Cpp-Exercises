#include<iostream>

using namespace std;

// Ham nhap canh hinh vuong
void nhapDuLieu(int& n) {
	cout << "Nhap canh = "; cin >> n;
}

// Cau a
int tinhChuVi(int n) {
	int chuVi = n * 4;
	return chuVi;
}

// Cau b
int tinhDienTich(int n) {
	int dienTich = n * n;
	return dienTich;
}

// Cau c
void inHinhVuong(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == 1 || i == n || j == 1 || j == n) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
}

int main() {
	int n;
	nhapDuLieu(n);

	int chuVi = tinhChuVi(n);
	int dienTich = tinhDienTich(n);

	cout << "Chu vi = " << chuVi << endl;
	cout << "Dien tich = " << dienTich << endl;
	inHinhVuong(n);
	return 1;
}