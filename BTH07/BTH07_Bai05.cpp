#include<iostream>
using namespace std;

//Input: Hai so nguyen a, b
void getData(int& a, int& b) {
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
}

//Output: Hoan doi gia tri hai so nguyen
void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

//Output: Sap xep hai so nguyen tang dan
void arrangeByIncre(int& a, int& b) {
	if (a > b) {
		swap(a, b);
	}
}

int main() {
	//Variable Declaring
	int a, b;

	/*
	Test Case A
	*/

	//Input
	getData(a, b);

	//Processing
	swap(a, b);

	//Output
	cout << "a = " << a << ", b = " << b << endl;

	/*
	Test Case B
	*/

	//Input
	getData(a, b);

	//Processing
	arrangeByIncre(a, b);

	//Output
	cout << "a = " << a << ", b = " << b << endl;

	return 1;
}