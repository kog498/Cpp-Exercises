/*
Chuong trinh tim gia tri tuyet doi
Tac gia: Phan An Phu
Ngay: 25/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int n;
	int gttd; //gia tri tuyet doi

	//nhap du lieu
	cout << "Nhap n: ";
	cin >> n;

	//tim gia tri tuyet doi
	if (n < 0) {
		gttd = -n;
	}
	else {
		gttd = n;
	}

	//in ra ket qua
	cout << "Gia tri tuyet doi la " << gttd;
	return 0;
}