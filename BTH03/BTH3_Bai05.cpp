/*
Chuong trinh xep loai hoc sinh
Tac gia: Phan An Phu
Ngay: 25/10/2024
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
	//khai bao bien
	double diem_tich_luy;
	string xep_loai;

	//nhap du lieu
	cout << "Nhap diem tich luy: ";
	cin >> diem_tich_luy;

	//xep loai hoc sinh
	if (diem_tich_luy >= 9) {
		xep_loai = "Xuat sac";
	}
	else if (diem_tich_luy >= 8) {
		xep_loai = "Gioi";
	}
	else if (diem_tich_luy >= 7) {
		xep_loai = "Kha";
	}
	else if (diem_tich_luy >= 6) {
		xep_loai = "Trung binh kha";
	}
	else if (diem_tich_luy >= 5) {
		xep_loai = "Trung binh";
	}
	else {
		xep_loai = "Yeu";
	}

	//in ra ket qua
	cout << "Xep loai: " << xep_loai;
	return 0;
}