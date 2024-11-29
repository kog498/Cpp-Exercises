/*
Chuong trinh tinh dien tich hinh chu nhat
Tac gia: Phan An Phu
Ngay: 15/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	double chieu_dai;
	double chieu_rong;
	double dien_tich;

	//nhap du lieu
	cout << "Chieu dai: ";
	cin >> chieu_dai;
	cout << "Chieu rong: ";
	cin >> chieu_rong;

	//tinh dien tich hinh chu nhat
	dien_tich = chieu_dai * chieu_rong;

	//in ra ket qua
	cout << "Dien tich: " << dien_tich;
	return 0;
}