//Chuong trinh kiem tra nam nhuan
#include<iostream>
using namespace std;

//Input: nam > 0
void nhapDuLieu(int& nam) {
	do {
		cout << "Nhap nam: "; cin >> nam;
		if (nam <= 0) cout << "So nam khong hop le! (nam > 0)\n";
	} while (nam <= 0);
}

//Output: Ket qua kiem tra nam nhuan
bool isNhuan(int nam) {
	return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int main() {
	//Khai bao bien
	int nam;

	//Input
	nhapDuLieu(nam);

	//Processing
	bool flag = isNhuan(nam);

	//Output
	if (flag) {
		cout << nam << " la nam nhuan!\n";
	}
	else {
		cout << nam << " khong la nam nhuan!\n";
	}
	return 1;
}
