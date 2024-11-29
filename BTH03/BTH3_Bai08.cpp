#include<iostream>

using namespace std;

int main() {
	int thang, nam;

	do {
		cout << "Nhap thang: "; cin >> thang;
		if (thang < 1 || thang > 12) cout << "So thang khong hop le!\n";
	} while (thang < 1 || thang > 12);

	do {
		cout << "Nhap nam: "; cin >> nam;
		if (nam < 1) cout << "So nam khong hop le!\n";
	} while (nam < 1);

	switch (thang) {
	case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
		cout << "So ngay cua thang " << thang << " nam " << nam << " la 31 ngay\n";
		break;
	case 4 : case 6 : case 9 : case 11:
		cout << "So ngay cua thang " << thang << " nam " << nam << " la 30 ngay\n";
		break;
	case 2:
		if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
			cout << "So ngay cua thang " << thang << " nam " << nam << " la 29 ngay\n";
		}
		else {
			cout << "So ngay cua thang " << thang << " nam " << nam << " la 28 ngay\n";
		}
		break;
	default:
		cout << "So thang khong hop le!";
	}
	return 0;
}