#include<iostream>
using namespace std;

int main() {
	//Khai bao bien
	int n1, n2;
	int dem = 0;

	//Input
	do {
		cout << "Nhap n1 = "; cin >> n1;
		cout << "Nhap n2 = "; cin >> n2;
		if (n1 < 1 || n2 < 1 || n1 >= n2) cout << "Gia tri khong hop le! (n1, n2 >= 1 & n1 < n2)\n";
	} while (n1 < 1 || n2 < 1 || n1 >= n2);

	//Processing
	for (int i = n1; i <= n2; i++) {
		bool flag = true;
		if (i < 2) {
			flag = false;
		}
		else {
			for (int j = 2; j <= sqrt(i); j++) {
				if (i % j == 0) {
					flag = false;
					break;
				}
			}
		}
		if (flag) dem++;
	}

	//Output
	cout << "[" << n1 << "; " << n2 << "] co " << dem << " so nguyen to\n";
	return 1;
}