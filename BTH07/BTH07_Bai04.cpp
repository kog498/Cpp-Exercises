#include<iostream>
#include<string>
using namespace std;

//Input: mot ky tu
void getData(char& c) {
	cout << "Nhap ky tu: "; cin >> c;
}

//Input: mot chuoi
void getData(string& s) {
	cout << "Nhap chuoi: "; cin >> s;
}

//Output: Ket qua kiem tra mot ky tu la ky tu so (1, 2, 3...)
bool isNumber(char c) {
	return c >= '0' && c <= '9';
}

//Output: Ket qua kiem tra mot ky tu la ky tu chu cai (a, B, c,...)
bool isLetter(char c) {
	return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

//Output: Xuat ket qua chuoi vua nhap co bao nhieu ky tu so, bao nhieu chu cai
void insertResult(string s) {
	int numberCounter = 0;
	int letterCounter = 0;
	for (char c : s) {
		if (isNumber(c)) numberCounter++;
		if (isLetter(c)) letterCounter++;
	}
	cout << "Co " << numberCounter << " chu so" << endl;
	cout << "Co " << letterCounter << " chu cai" << endl;
}

int main() {
	//Variable Declaring
	char c;
	string s;


	/*
	Test Case A, B
	*/
	
	//Input
	getData(c);

	//Processing
	bool isNumberResult = isNumber(c);
	bool isLetterResult = isLetter(c);

	//Output
	cout << "La so: " << (isNumberResult ? "dung" : "sai") << endl;
	cout << "La chu cai: " << (isLetterResult ? "dung" : "sai") << endl;

	/*
	Test Case C
	*/

	//Input
	getData(s);

	//Processing & Ouput
	insertResult(s);

	return 1;
}