#include<iostream>
using namespace std;

int main() {
	const int MAXSIZE = 100;
	int a[MAXSIZE];
	int currentSize;
	int max = INT16_MIN;

	//Input
	cout << "Nhap so phan tu can dung: "; cin >> currentSize;
	for (int i = 0; i < currentSize; i++) {
		cout << "Nhap phan tu " << i + 1 << ": ";
		cin >> a[i];
	}

	//Processing
	for (int i = 0; i < currentSize; i++) {
		if (max < a[i]) {
			max = a[i];
		}
	}

	//Output
	cout << "Gia tri lon nhat cua mang: " << max << endl;
	return 1;
}