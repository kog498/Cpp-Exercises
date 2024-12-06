#include<iostream>
using namespace std;

int main() {
	const int MAXSIZE = 100;
	int arr[MAXSIZE];
	int arrSize;
	int deletePosition;

	//Input
	do {
		cout << "Nhap so phan tu: "; cin >> arrSize;
		if (arrSize < 1 || arrSize > MAXSIZE) 
			cout << "So phan tu khong hop le!\n";
	} while (arrSize < 1 || arrSize > MAXSIZE);

	for (int i = 0; i < arrSize; i++) {
		cout << "Nhap phan tu " << i + 1 << ": ";
		cin >> arr[i];
	}

	do {
		cout << "Nhap phan tu muon xoa: "; cin >> deletePosition;
		if (deletePosition < 1 || deletePosition > arrSize)
			cout << "Phan tu khong hop le!\n";
	} while (deletePosition < 1 || deletePosition > arrSize);

	//Processing
	if (arrSize > 0) {
		for (int i = deletePosition - 1; i < arrSize - 1; i++) {
			arr[i] = arr[i + 1];
		}
		arrSize--;
	}

	//Output
	for (int i = 0; i < arrSize; i++) {
		cout << arr[i] << " ";
	}

	return 1;
}