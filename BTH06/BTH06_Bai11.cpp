//Chuong trinh kiem tra so doi xung
#include<iostream>
using namespace std;

//Input: n > 0
void nhapDuLieu(int& n) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0) cout << "n khong hop le! (n > 0)\n";
	} while (n <= 0);
}

//Output: Ket qua kiem tra so doi xung
bool isDoiXung(int n) {
	int soDaoNguoc = 0;
	int tam = n;
	while (tam != 0) {
		soDaoNguoc = soDaoNguoc * 10 + tam % 10;
		tam /= 10;
	}
	return soDaoNguoc == n;
}

int main() {
	//Khai bao bien
	int n;

	//Input
	nhapDuLieu(n);

	//Processing
	bool flag = isDoiXung(n);

	//Output
	if (flag) {
		cout << n << " la so doi xung!\n";
	}
	else {
		cout << n << " khong la so doi xung!\n";
	}
	return 1;
}