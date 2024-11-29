#include<iostream>
#include<string>

using namespace std;

int main() {
	//khai bao bien
	string s;
	int chieuDaiChuoi;

	//nhap du lieu
	cout << "Nhap chuoi s: ";
	getline(cin, s);

	//tinh chieu dai chuoi
	chieuDaiChuoi = s.length();

	//in ra ket qua
	cout << "Chieu dai chuoi: " << chieuDaiChuoi;
	return 0;
}