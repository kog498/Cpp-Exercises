#include<iostream>

using namespace std;

// Nhap a va b
void nhapDuLieu(int& a, int& b) {
	cout << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
}
// Nhap a, b va c
void nhapDuLieu(int& a, int& b, int& c) {
	cout << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
	cout << "Nhap c = "; cin >> c;
}

// Cau a
int timMax(int a, int b) {
	int max = b;
	if (a > b) max = a;
	return max;
}

// Cau b
int timMax(int a, int b, int c) {
	int max = c;
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= c){
		max = b;
	}
	return max;
}

int main() {
	int a, b, c;

	// Kiem tra cau a
	nhapDuLieu(a, b);

	int max = timMax(a, b);
	cout << "MAX = " << max << endl;

	// Kiem tra cau b
	nhapDuLieu(a, b, c);

	max = timMax(a, b, c);
	cout << "MAX = " << max << endl;

	return 0;
}