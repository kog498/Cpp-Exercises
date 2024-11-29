/*
Chuong trinh in ra so ngay trong thang
Tac gia: Phan An Phu
Ngay: 28/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int thang;

	//nhap du lieu
	cout << "Nhap thang: ";
	cin >> thang;

	//kiem tra va in ra ket qua
	switch (thang) {
	case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
		cout << "So ngay cua thang " << thang << " la 31 ngay.";
		break;
	case 4 : case 6 : case 9 : case 11:
		cout << "So ngay cua thang " << thang << " la 30 ngay.";
		break;
	case 2:
		cout << "So ngay cua thang 2 la 28 hoac 29 ngay.";
		break;
	default:
		cout << "So thang khong hop le!";
	}
	return 0;
}