#include<iostream>

using namespace std;

// Ham nhap du lieu
void nhapDuLieu(int& n) {
	cout << "Nhap n = "; cin >> n;
}

// De bai
void inHinhVuong(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}

int main() {
	int n;
	nhapDuLieu(n);
	inHinhVuong(n);
	return 1;
}