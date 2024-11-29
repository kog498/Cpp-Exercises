#include<iostream>

using namespace std;

int main() {
	//khai bao bien
	char a;
	int b;

	//nhap du lieu
	cout << "Nhap ki tu: ";
	cin >> a;
	cout << "Nhap so nguyen: ";
	cin >> b;
	
	//in ra ket qua
	cout << "Ma ASCII cua ki tu: " << static_cast<int>(a) << endl;
	cout << "So nguyen co ky tu ASCII la: " << static_cast<char>(b);
	return 0;
}