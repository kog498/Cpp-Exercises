#include<iostream>
using namespace std;

//Output: Cong 2 so nguyen
int add(int a, int b) {
	return a + b;
}

//Output: Tru 2 so nguyen
int subtract(int a, int b) {
	return a - b;
}

//Output: Nhan 2 so nguyen
int multiply(int a, int b) {
	return a * b;
}

//Output: Chia 2 so nguyen
double divide(int a, int b) {
	if (b == 0) {
		cout << "Loi toan! (b phai khac 0)\n";
		return 0;
	}
	return (double)a / b;
}

//Output: Hien thi menu chuong trinh
void menu() {
	int a, b, choice;
	double result;
	bool status = true;

	while (status) {
		cout << endl;
		cout << "=====MAY TINH DON GIAN=====\n";
		cout << "1. Phep cong\n";
		cout << "2. Phep tru\n";
		cout << "3. Phep nhan\n";
		cout << "4. Phep chia\n";
		cout << "0. Thoat chuong trinh\n";
		cout << endl;
		cout << "Nhap a: "; cin >> a;
		cout << "Nhap b: "; cin >> b;
		cout << endl;
		cout << "Nhap lua chon: "; cin >> choice;
		system("cls");

		switch (choice) {
		case 1:
			result = add(a, b);
			break;
		case 2:
			result = subtract(a, b);
			break;
		case 3:
			result = multiply(a, b);
			break;
		case 4:
			result = divide(a, b);
			break;
		case 0:
			status = false;
			cout << "Cam on vi da su dung he thong!\n";
			return;
		default:
			result = 0;
			cout << "Phep toan ngoai he thong!\n";
		}
		cout << "Ket qua: " << result << endl;
	}
}

int main() {
	menu();
	return 1;
}