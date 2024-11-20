//Chuong trinh kiem tra so nguyen to
#include<iostream>
using namespace std;

//Input: n
void nhapDuLieu(int& n) {
	cout << "Nhap n: "; cin >> n;
}

//Output: Ket qua kiem tra so nguyen to
bool isNguyenTo(int n) {
	bool flag = true;
	if (n < 2) {
		flag = false;
	}
	else {
		//Neu n = 2 thi i = 2 > sqrt(2) => khong thuc hien vong lap, flag = true
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				flag = false;
				break;
			}
		}
	}
	return flag;
}

int main() {
	//Khai bao bien
	int n;

	//Input
	nhapDuLieu(n);

	//Processing
	bool flag = isNguyenTo(n);

	//Output
	if (flag) {
		cout << n << " la so nguyen to!\n";
	}
	else {
		cout << n << " khong la so nguyen to!\n";
	}
	return 1;
}