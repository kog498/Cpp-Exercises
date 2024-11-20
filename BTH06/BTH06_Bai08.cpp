//Chuong trinh tinh chu vi, dien tich va ve hinh vuong
#include<iostream>
using namespace std;

//Input: canh > 0
void nhapDuLieu(int& canh) {
	do {
		cout << "Nhap canh: "; cin >> canh;
		if (canh <= 0) cout << "Canh khong hop le! (> 0)\n";
	} while (canh <= 0);
}

//Output: Chu vi, Dien tich
int tinhChuVi(int canh) {
	int chuVi = canh * 4;
	return chuVi;
}
int tinhDienTich(int canh) {
	int dienTich = canh * canh;
	return dienTich;
}

//Output: Ve hinh vuong rong
void veHinhVuong(int canh) {
	for (int i = 1; i <= canh; i++) {
		for (int j = 1; j <= canh; j++) {
			if (i == 1 || i == canh || j == 1 || j == canh) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main() {
	//Khai bao bien
	int canh;

	//Input
	nhapDuLieu(canh);

	//Processing
	int chuVi = tinhChuVi(canh);
	int dienTich = tinhDienTich(canh);

	//Output
	cout << "Chu vi: " << chuVi << endl;
	cout << "Dien tich: " << dienTich << endl;
	veHinhVuong(canh);
	return 1;
}