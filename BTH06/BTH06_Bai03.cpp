//Chuong trinh tinh x luy thua y
#include<iostream>
using namespace std;

//Input: x, y
void nhapDuLieu(double& x, int& y) {
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
}

//Output: x^y
double tinhLuyThua(double x, int y) {
	double luyThua = 1;
	for (int i = 1; i <= (y >= 0 ? y : -y); i++) {
		luyThua = luyThua * x;
	}
	if (y >= 0) {
		return luyThua;
	}
	else {
		return (1 / luyThua) * 1.0;
	}
}

int main() {
	//Khai bao bien
	double x;
	int y;

	//Input
	nhapDuLieu(x, y);

	//Processing
	double luyThua = tinhLuyThua(x, y);

	//Output
	cout << x << "^" << y << " = " << luyThua << endl;
	return 1;
}