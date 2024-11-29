/*
Chuong trinh tinh tien luong nhan vien
Tac gia: Phan An Phu
Ngay: 15/10/2024
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
	//khai bao bien
	string ten_nhan_vien;
	short so_ngay_lam_viec;
	int tien_cong_mot_ngay;
	int tien_luong;

	//nhap du lieu
	cout << "Nhap ten nhan vien: ";
	getline(cin, ten_nhan_vien);
	cout << "Nhap so ngay lam viec: ";
	cin >> so_ngay_lam_viec;
	cout << "Nhap tien cong mot ngay: ";
	cin >> tien_cong_mot_ngay;

	//tinh tien luong
	tien_luong = so_ngay_lam_viec * tien_cong_mot_ngay;

	//in ra ket qua
	cout << "Nhan vien: " << ten_nhan_vien << endl;
	cout << "Tien luong: " << tien_luong;
	return 0;
}