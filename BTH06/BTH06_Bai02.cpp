//Chuong trinh tim max giua 2 so va 3 so
#include<iostream>
using namespace std;

//Input: 2 so nguyen
void nhapDuLieu(int& a, int& b) {
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
}

//Input: 3 so nguyen
void nhapDuLieu(int& a, int& b, int& c) {
	nhapDuLieu(a, b);
	cout << "Nhap c: "; cin >> c;
}

//Output: So lon nhat giua 2 so
int timMax(int a, int b) {
	int max = b;
	if (a > b) max = a;
	return max;
}

//Output: So lon nhat giua 3 so
int timMax(int a, int b, int c) {
	int max;
	if (a >= b && a >= c) {
		max = a;
	}
	else if (b >= c) {
		max = b;
	}
	else {
		max = c;
	}
	return max;
}

int main() {
	//Khai bao bien
	int a, b, c;

	//Input & Processing 1
	nhapDuLieu(a, b);
	int max2So = timMax(a, b);

	//Input & Processing 2
	nhapDuLieu(a, b, c);
	int max3So = timMax(a, b, c);

	//Output
	cout << "So lon nhat giua 2 so: " << max2So << endl;
	cout << "So lon nhat giua 3 so: " << max3So << endl;
	return 1;
}