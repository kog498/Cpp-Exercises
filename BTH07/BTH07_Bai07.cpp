#include<iostream>
#include<string>
using namespace std;

//Input: ky tu
void getData(char& c) {
	cout << "Nhap ky tu: "; cin >> c;
}

//Input: chuoi ky tu
void getData(string& s) {
	cout << "Nhap chuoi: "; cin >> s;
}

//Output: Ket qua kiem tra ky tu in hoa
bool isUpperCase(char c) {
	return c >= 'A' && c <= 'Z';
}

//Output: Ket qua kiem tra ky tu thuong
bool isLowerCase(char c) {
	return c >= 'a' && c <= 'z';
}

//Output: In ra ket qua co bao nhieu chu in hoa va chu thuong
void insertResult(string s) {
	int upperCounter = 0;
	int lowerCounter = 0;
	for (char c : s) {
		if (isUpperCase(c)) upperCounter++;
		if (isLowerCase(c)) lowerCounter++;
	}
	cout << "Chu in hoa: " << upperCounter << endl;
	cout << "Chu thuong: " << lowerCounter << endl;
}

int main() {
	//Khai bao bien
	char c;
	string s;

	/*
	Test Case A, B
	*/

	//Input
	getData(c);

	//Processing
	bool isUpperCaseResult = isUpperCase(c);
	bool isLowerCaseResult = isLowerCase(c);

	//Output
	cout << "Chu in hoa: " << (isUpperCaseResult ? "true" : "false") << endl;
	cout << "Chu thuong: " << (isLowerCaseResult ? "true" : "false") << endl;


	/*
	Test C
	*/

	//Input
	getData(s);

	//Processing & Output
	insertResult(s);
	return 1;
}