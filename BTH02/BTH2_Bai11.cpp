#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

int main() {
	//khai bao bien
	double x;
	const double PI = 3.14;

	//nhap du lieu
	cout << "Nhap goc x: ";
	cin >> x;
	x = x * PI / 180;

	//in ra ket qua
	cout << "sin(" << x << ") = " << setprecision(1) << fixed << sin(x) << endl;
	cout << "cos(" << x << ") = " << setprecision(1) << fixed << cos(x) << endl;
	cout << "tan(" << x << ") = " << setprecision(1) << fixed << tan(x);
	return 0;
}