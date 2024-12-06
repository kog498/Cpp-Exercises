#include<iostream>
using namespace std;

void enter(int arr[], int& arrSize, const int MAXSIZE) {
	do {
		cout << "Nhap so phan tu: "; cin >> arrSize;
		if (arrSize < 1 || arrSize > MAXSIZE) {
			cout << "So phan tu khong hop le!\n";
		}
	} while (arrSize < 1 || arrSize > MAXSIZE);

	for (int i = 0; i < arrSize; i++) {
		cout << "Nhap phan tu " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void print(const int arr[], int arrSize) {
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

//Dem so lan xuat hien cua phan tu vi tri thu x trong mang. VD: 5 2 1 2 2, x = 2 -> count = 3
int count(const int arr[], int arrSize, int x) {
	int count = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arr[x - 1] == arr[i]) {
			count++;
		}
	}
	return count;
}

int main() {
	const int MAXSIZE = 100;
	int arr[MAXSIZE];
	int arrSize;
	int x, result;

	enter(arr, arrSize, MAXSIZE);
	print(arr, arrSize);

	cout << "Nhap phan tu: "; cin >> x;
	result = count(arr, arrSize, x);
	cout << result << endl;

	return 1;
}