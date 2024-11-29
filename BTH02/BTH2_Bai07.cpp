/*
Chuong trinh tinh khoang cach giua 2 diem
Tac gia: Phan An Phu
Ngay: 17/10/2024
*/
#include<iostream>
#include<math.h>

using namespace std;

int main() {
	//khai bao bien
	int x1, y1, x2, y2; //x1, y1 -> toa do diem 1; x2, y2 -> toa do diem 2
	double khoang_cach;

	//nhap du lieu
	cout << "Toa do diem 1: " << endl;
	cin >> x1 >> y1;
	cout << "Toa do diem 2: " << endl;
	cin >> x2 >> y2;

	//tinh khoang cach
	khoang_cach = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	//in ra ket qua
	cout << "Khoang cach giua 2 diem la: " << khoang_cach;
	return 0;
}