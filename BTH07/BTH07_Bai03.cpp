#include<iostream>
using namespace std;

int tinhGiaiThua(int n) {
	int giaiThua = 1;
	for (int i = 1; i <= n; i++) {
		giaiThua = giaiThua * i;
	}
	return giaiThua;
}

int tinhToHop(int n, int k) {
	return tinhGiaiThua(n) / (tinhGiaiThua(k) * tinhGiaiThua(n - k));
}

void inTamGiacPascal(int h) {
	for (int n = 0; n < h; n++) {
		for (int k = 0; k <= n; k++) {
			cout << tinhToHop(n, k) << " ";
		}
		cout << endl;
	}
}

int main() {
	int chon;
	int n, k, h;

	do {
		cout << "=====MAY TINH=====\n";
		cout << "1. Tinh giai thua\n";
		cout << "2. Tinh to hop\n";
		cout << "3. In tam giac Pascal\n";
		cout << "0. Ket thuc chuong trinh\n";
		cout << "==================\n";
		cout << "Nhap lua chon: "; cin >> chon;
		system("cls");

		switch (chon) {
		case 1:
		{
			cout << "Tinh giai thua\n";
			cout << "Nhap n: "; cin >> n;
			int giaiThua = tinhGiaiThua(n);
			cout << n << "! = " << giaiThua << endl;

			break;
		}
		case 2:
		{
			cout << "Tinh to hop\n";
			cout << "Nhap n: "; cin >> n;
			cout << "Nhap k: "; cin >> k;
			int toHop = tinhToHop(n, k);
			cout << "C(" << n << ", " << k << ") = " << toHop << endl;

			break;
		}
		case 3:
			cout << "In tam giac Pascal\n";
			cout << "Nhap chieu cao tam giac: "; cin >> h;
			inTamGiacPascal(h);
			cout << endl;

			break;
		case 0:
			cout << "Thoat\n";
			break;
		default:
			cout << "Tinh nang khong hop le!\n";
		}
	} while (chon != 0);

	system("pause");
	return 1;
}
