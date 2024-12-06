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

// Tim vi tri dau tien cua phan tu nho nhat trong mang. VD: 2 5 1 1 5, vi tri = 2
int findMinPos(const int arr[], int arrSize) {
	int arrMin = INT16_MAX;
	int minPos = 0;
	for (int i = 0; i < arrSize; i++) {
		if (arrMin > arr[i]) {
			arrMin = arr[i];
			minPos = i;
		}
	}
	return minPos;
}

int main() {
	const int MAXSIZE = 100;
	int arr[MAXSIZE];
	int arrSize;
	int minPos;

	enter(arr, arrSize, MAXSIZE);
	print(arr, arrSize);

	minPos = findMinPos(arr, arrSize);

	cout << minPos + 1 << endl;
	return 1;
}