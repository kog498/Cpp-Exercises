/*
Chuong trinh kiem tra nam nhuan hay khong nhuan
Tac gia: Phan An Phu
Ngay: 28/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	int n;

	//nhap du lieu
	cout << "Nhap nam: ";
	cin >> n;

	//kiem tra va xuat ket qua
	if (n % 4 == 0 && n % 100 != 0) {
		cout << "Day la nam nhuan!";
	}
	else if (n % 400 == 0) {
		cout << "Day la nam nhuan!";
	}
	else {
		cout << "Day la nam khong nhuan!";
	}
	return 0;
}