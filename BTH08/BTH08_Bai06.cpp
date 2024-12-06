#include<iostream>
using namespace std;

void enter(int arr[], int& arrSize, const int MAXSIZE) {
	do {
		cout << "Nhap so phan tu: "; cin >> arrSize;
		if (arrSize > MAXSIZE || arrSize < 1)
			cout << "So phan tu khong hop le!\n";
	} while (arrSize > MAXSIZE || arrSize < 1);

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

bool find(const int arr[], int arrSize, int x) {
	for (int i = 0; i < arrSize; i++) {
		if (x == arr[i]) return true;
	}
	return false;
}

void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

void reverse(int arr[], int arrSize) {
	for (int i = arrSize; i >= 1; i--) {
		for (int j = 0; j < i - 1; j++) {
			swap(arr[j], arr[j + 1]);
		}
	}
}

void remove(int arr[], int& arrSize, int p) {
	if (p >= 1 && p <= arrSize) {
		if (arrSize > 0) {
			for (int i = p - 1; i < arrSize - 1; i++) {
				arr[i] = arr[i + 1];
			}
			arrSize--;
		}
		else {
			cout << "Khong the xoa them duoc nua!\n";
		}
	}
	else {
		cout << "Phan tu can xoa khong hop le!\n";
	}
}

int main() {
	const int MAXSIZE = 100;
	int arr[MAXSIZE];
	int arrSize;
	bool ketQua;

	enter(arr, arrSize, MAXSIZE);

	print(arr, arrSize);

	ketQua = find(arr, arrSize, 2);
	cout << ketQua << endl;

	reverse(arr, arrSize);
	print(arr, arrSize);

	int p = 2;
	remove(arr, arrSize, p);
	print(arr, arrSize);

	return 1;
}