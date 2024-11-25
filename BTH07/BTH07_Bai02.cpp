//Chuong trinh tim uoc chung lon nhat va rut gon phan so
#include<iostream>
using namespace std;

//Input: Hai so nguyen m, n > 0
void nhapPhanSo(int& m, int& n) {
	cout << "=====NHAP PHAN SO M/N=====\n";
	do {
		cout << "Nhap m: "; cin >> m;
		if (m <= 0) cout << "m khong hop le! (m > 0)\n";
	} while (m <= 0);
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0) cout << "n khong hop le! (n > 0)\n";
	} while (n <= 0);
}

//Output: Uoc chung lon nhat cua hai so m va n theo thuat toan Euclid
/*
Mo ta: Vi du ta nhap m = 6, n = 12
Buoc 1: Neu n = 0 thi tra ve ham gia tri m, khong thi sang buoc 2
Buoc 2: Gan r = m % n
Buoc 3: Gan m = n va n = r. Quay lai buoc 1
*/
int timUCLN(int m, int n) {
	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

//Output: Rut gon phan so m/n
void rutGonPhanSo(int& m, int& n) {
	int UCLN = timUCLN(m, n);
	m = m / UCLN;
	n = n / UCLN;
}

int main() {
	//Khai bao bien
	int m, n;

	//Input
	nhapPhanSo(m, n);

	//Processing
	rutGonPhanSo(m, n);

	//Output
	cout << "Phan so da duoc rut gon: " << m << "/" << n << endl;
	return 1;
}