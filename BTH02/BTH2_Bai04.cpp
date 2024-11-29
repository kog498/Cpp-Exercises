/*
Chuong trinh tinh chu vi va dien tich hinh tron
Tac gia: Phan An Phu
Ngay: 15/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	double ban_kinh;
	const double PI = 3.14;
	double chu_vi;
	double dien_tich;

	//nhap du lieu
	cout << "Nhap ban kinh: ";
	cin >> ban_kinh;
	
	//tinh chu vi va dien tich hinh tron
	chu_vi = 2 * PI * ban_kinh;
	dien_tich = PI * ban_kinh * ban_kinh;

	//in ra ket qua
	cout << "Chu vi: " << chu_vi << endl;
	cout << "Dien tich: " << dien_tich;
	return 0;
}