/*
Chuong trinh tinh tong gia tri don hang cho cua hang
Tac gia: Phan An Phu
Ngay: 17/10/2024
*/
#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	short tong_so_sach_da_mua;
	int tong_so_tien_mua_sach;
	int tien_thue;
	int tien_van_chuyen;
	int tong_gia_tri_don_hang;

	//nhap du lieu
	cout << "Nhap so luong sach da mua: ";
	cin >> tong_so_sach_da_mua;
	cout << "Nhap so tien mua sach: ";
	cin >> tong_so_tien_mua_sach;
	
	//tinh thue
	tien_thue = tong_so_tien_mua_sach * 7.5 / 100;

	//tinh tien van chuyen
	tien_van_chuyen = tong_so_sach_da_mua * 2000;

	//tinh tong gia tri don hang
	tong_gia_tri_don_hang = tong_so_tien_mua_sach + tien_thue + tien_van_chuyen;

	//in ra ket qua
	cout << "Tong gia tri don hang la: " << tong_gia_tri_don_hang;
	return 0;
}