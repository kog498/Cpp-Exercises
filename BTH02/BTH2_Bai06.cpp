/*
Chuong trinh tinh tong 3 chu so va in ra 
so nghich dao cua so nguyen gom 3 chu so
Tac gia: Phan An Phu
Ngay: 16/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	unsigned int n; //n la so nguyen duong gom 3 chu so
	int hang_don_vi;
	int hang_chuc;
	int hang_tram;
	int sum; //sum la tong cua 3 chu so

	//nhap du lieu
	cout << "Nhap so nguyen gom 3 chu so: ";
	cin >> n;

	//tach hang don vi, hang chuc, hang tram
	hang_don_vi = n % 10;
	hang_chuc = n / 10 % 10;
	hang_tram = n / 10 / 10;

	//tinh tong 3 chu so
	sum = hang_don_vi + hang_chuc + hang_tram;

	//in ra ket qua
	cout << "Tong 3 chu so: " << sum << endl;
	cout << "So nghich dao: " << hang_don_vi << hang_chuc << hang_tram;
	return 0;
}