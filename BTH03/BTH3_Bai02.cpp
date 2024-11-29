/*
Chuong trinh tim ra so lon nhat trong 2 so nguyen
Tac gia: Phan An Phu
Ngay: 25/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int a, b;
	int max;

	//nhap du lieu
	cout << "Nhap a = ";
	cin >> a;
	cout << "Nhap b = ";
	cin >> b;

	//tim gia tri lon nhat
	if (a > b) {
		max = a;
	}
	else {
		max = b;
	}

	//in ra ket qua
	cout << "Max = " << max;

	return 0;
}