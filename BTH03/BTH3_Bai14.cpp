#include<iostream>
using namespace std;

int main() {
	int a, b, c; // Test case: 5 9 3 - 5 3 9 - 9 5 3

	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap c: "; cin >> c;

	int temp;

	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	if (a > c) {
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c) {
		temp = b;
		b = c;
		c = temp;
	}

	cout << a << b << c << endl;
	return 1;
}
