#include<iostream>
using namespace std;

int main() {
	const int MAXSIZE = 100;
	double values[MAXSIZE];
	int currentSize;

	//Input
	cout << "Nhap so phan tu can dung: "; cin >> currentSize;
	for (int i = 0; i < currentSize; i++) {
		cout << "Nhap phan tu thu " << i + 1 << ": ";
		cin >> values[i];
	}

	//Output
	for (int i = 0; i < currentSize; i++) {
		cout << values[i];
		if (i < currentSize - 1) {
			cout << ", ";
		}
	}
	cout << endl;
	return 1;
}