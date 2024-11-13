#include<iostream>

using namespace std;

// Ham nhap du lieu
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// De bai
int timSoDaoNguoc(int n) {
	int soDaoNguoc = 0;
	while (n != 0) {
		soDaoNguoc = soDaoNguoc * 10 + n % 10;
		n = n / 10;
	}
	return soDaoNguoc;
}

int main() {
	int n;
	nhapDuLieu(n);

	int soDaoNguoc = timSoDaoNguoc(n);

	cout << "So dao nguoc cua " << n << " la " << soDaoNguoc;
	return 1;
}