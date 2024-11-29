/*
Chuong trinh tinh dien tich hinh vuong
Tac gia: Phan An Phu
Ngay: 15/10/2024
*/

#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int canh;
	int dien_tich;

	//nhap du lieu
	cout << "Nhap do dai canh: ";
	cin >> canh;

	//tinh dien tich hinh vuong
	dien_tich = canh * canh;
	
	//in ra ket qua
	cout << "Dien tich: " << dien_tich;

	return 0;
}
