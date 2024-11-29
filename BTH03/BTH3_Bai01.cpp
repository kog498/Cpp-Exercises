/*
Chuong trinh xet diem trung binh cua hoc sinh
Tac gia: Phan An Phu
Ngay: 25/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	double diem;

	//nhap du lieu
	cout << "Nhap diem TB: ";
	cin >> diem;

	//kiem tra va in ra ket qua
	if (diem >= 5) {
		cout << "Ban da dau!";
	}
	else {
		cout << "Ban da rot!";
	}

	return 0;
}
