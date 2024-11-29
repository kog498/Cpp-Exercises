/*
Chuong trinh so sanh hai so nguyen
Tac gia: Phan An Phu
Ngay: 25/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int a, b;

	//nhap du lieu
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;

	//so sanh 2 so va in ra ket qua
	if (a == b) {
		cout << "a = b";
	}
	else if (a > b) {
		cout << "a > b";
	}
	else {
		cout << "a < b";
	}
	return 0;
}