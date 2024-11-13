#include<iostream>

using namespace std;

// Nhap chieu dai, chieu rong
void nhapDuLieu(double& a, double& b) {
	cout << "Nhap chieu dai = "; cin >> a;
	cout << "Nhap chieu rong = "; cin >> b;
}

// Cau a
double tinhDienTich(double a, double b) {
	double dienTich = a * b;
	return dienTich;
}

// Cau b
double tinhChuVi(double a, double b) {
	double chuVi = (a + b) * 2;
	return chuVi;
}

int main() {
	double a, b;

	nhapDuLieu(a, b);
	double dienTich = tinhDienTich(a, b);
	double chuVi = tinhChuVi(a, b);

	cout << "Dien tich = " << dienTich << endl;
	cout << "Chu vi = " << chuVi << endl;
	return 1;
}