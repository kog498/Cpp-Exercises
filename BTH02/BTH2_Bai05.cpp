/*
Chuong trinh tinh dien tich hinh tam giac
Tac gia: Phan An Phu
Ngay: 16/10/2024
*/
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	//khai bao bien
	double a, b, c; //a, b, c lan luot la do dai 3 canh cua tam giac
	double nua_chu_vi;
	double dien_tich;

	//nhap du lieu
	cout << "Nhap canh a: ";
	cin >> a;
	cout << "Nhap canh b: ";
	cin >> b;
	cout << "Nhap canh c: ";
	cin >> c;

	//tinh nua chu vi
	nua_chu_vi = (a + b + c) / 2;

	//tinh dien tich
	dien_tich = sqrt(nua_chu_vi * (nua_chu_vi - a) * (nua_chu_vi - b) * (nua_chu_vi - c));

	//in ra ket qua
	cout << "Dien tich: " << dien_tich;

	return 0;
}