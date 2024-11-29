/*
Chuong trinh tinh gia ban cua hang do go
Tac gia: Phan An Phu
Ngay: 17/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int gia_mua;
	int gia_ban;

	//nhap du lieu
	cout << "Nhap gia mua: ";
	cin >> gia_mua;

	//tinh gia ban
	gia_ban = gia_mua + gia_mua * 60 / 100;

	//in ra ket qua
	cout << "Gia ban: " << gia_ban;
	return 0;
}