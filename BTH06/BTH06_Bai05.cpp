//Chuong trinh ve hinh vuong
#include<iostream>
using namespace std;

//Input: canh
void nhapDuLieu(int& canh) {
	do {
		cout << "Nhap canh: "; cin >> canh;
		if (canh < 1) cout << "Canh khong hop le! (>= 1)\n";
	} while (canh < 1);
}

//Output: Xuat ra hinh vuong
void xuatHinhVuong(int canh) {
	for (int i = 1; i <= canh; i++) {
		for (int j = 1; j <= canh; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

int main() {
	//Khai bao bien
	int canh;

	//Input
	nhapDuLieu(canh);

	//Output
	xuatHinhVuong(canh);

	return 1;
}