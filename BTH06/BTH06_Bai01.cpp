//Chuong trinh tinh chu vi va dien tich hinh chu nhat
#include<iostream>
using namespace std;

//Input: Chieu dai, Chieu rong
void nhapDuLieu(int& chieuDai, int& chieuRong) {
	do {
		cout << "Nhap chieu dai = "; cin >> chieuDai;
		if (chieuDai < 1) cout << "Chieu dai khong hop le! (>= 1)\n";
	} while (chieuDai < 1);
	do {
		cout << "Nhap chieu rong = "; cin >> chieuRong;
		if (chieuRong < 1) cout << "Chieu rong khong hop le! (>= 1)\n";
	} while (chieuRong < 1);
}

//Output: Chu vi, Dien tich
int tinhDienTich(int chieuDai, int chieuRong) {
	int dienTich = chieuDai * chieuRong;
	return dienTich;
}

int tinhChuVi(int chieuDai, int chieuRong) {
	int chuVi = (chieuDai + chieuRong) * 2;
	return chuVi;
}


int main() {
	//Khai bao bien
	int chieuDai, chieuRong;

	//Input
	nhapDuLieu(chieuDai, chieuRong);

	//Processing
	int dienTich = tinhDienTich(chieuDai, chieuRong);
	int chuVi = tinhChuVi(chieuDai, chieuRong);

	//Output
	cout << "Dien tich: " << dienTich << endl;
	cout << "Chu vi: " << chuVi << endl;
	return 1;
}
