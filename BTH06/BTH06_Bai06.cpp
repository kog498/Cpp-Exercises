//Chuong trinh tinh so dao nguoc
#include<iostream>
using namespace std;

//Input: n > 0
void nhapDuLieu(int& n) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n <= 0) cout << "n khong hop le! (n > 0)\n";
	} while (n <= 0);
}

//Output: So dao nguoc
int tinhSoDaoNguoc(int n) {
	int soDaoNguoc = 0;
	int tam = n;
	while (tam != 0) {
		soDaoNguoc = soDaoNguoc * 10 + tam % 10;
		tam /= 10;
	}
	return soDaoNguoc;
}

int main() {
	//Khai bao bien
	int n;

	//Input
	nhapDuLieu(n);

	//Processing
	int soDaoNguoc = tinhSoDaoNguoc(n);

	//Output
	cout << "So dao nguoc cua " << n << " la " << soDaoNguoc << endl;
	return 1;
}