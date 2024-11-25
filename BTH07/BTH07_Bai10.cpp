#include<iostream>
using namespace std;

//Input: Hai so nguyen a va b
void getData(int& a, int& b) {
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
}

//Input: Ba so nguyen a, b va c
void getData(int& a, int& b, int& c) {
	getData(a, b);
	cout << "Nhap c: "; cin >> c;
}

//Processing item: Hoan doi gia tri cua 2 so nguyen
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

//Output: Sap xep 2 so nguyen giam dan
void swapByDecrement(int& a, int& b) {
	if (a < b) swap(a, b);
}

//Output: Sap xep 3 so nguyen tang dan
void swapByIncrement(int& a, int& b, int& c) {
	if (a > b) swap(a, b);
	if (a > c) swap(a, c);
	if (b > c) swap(b, c);
}

//Output: Sap xep 3 so nguyen giam dan
void swapByDecrement(int& a, int& b, int& c) {
	if (a < b) swap(a, b);
	if (a < c) swap(a, c);
	if (b < c) swap(b, c);
}

int main() {
	//Khai bao bien
	int a, b, c;


	//Section A
	
	//Input
	getData(a, b);

	//Processing
	swapByDecrement(a, b);

	//Output
	cout << a << " " << b << endl;


	//Section B

	//Input
	getData(a, b, c);

	//Processing
	swapByIncrement(a, b, c);

	//Output
	cout << a << " " << b << " " << c << endl;


	//Section C

	//Input
	getData(a, b, c);

	//Processing
	swapByDecrement(a, b, c);

	//Output
	cout << a << " " << b << " " << c << endl;

	return 1;
}