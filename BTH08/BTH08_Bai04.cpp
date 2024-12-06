#include<iostream>
using namespace std;

int main() {
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int currentSize;
	int sum = 0;
	double avg = 0;

	//Input
	cout << "Nhap so phan tu can dung: "; cin >> currentSize;
	for (int i = 0; i < currentSize; i++) {
		cout << "Nhap phan tu " << i + 1 << ": ";
		cin >> a[i];
	}

	//Processing
	for (int i = 0; i < currentSize; i++) {
		sum += a[i];
	}
	avg = (double)sum / currentSize;

	//Output
	cout << "Tong = " << sum << endl;
	cout << "Trung binh = " << avg << endl;
	return 1;
}