#include<iostream>

using namespace std;

// Ham nhap du lieu
void nhapDuLieu(double& x, int& y) {
	cout << "Nhap x = "; cin >> x;
	cout << "Nhap y = "; cin >> y;
}

double luyThua(double x, int y) {
	double ketQua = 1;
	for (int i = 1; i <= y; i++) {
		ketQua *= x;
	}
	return ketQua;
}

int main() {
	double x;
	int y;

	nhapDuLieu(x, y);
	double ketQua = luyThua(x, y);
	cout << ketQua << endl;
	return 1;
}