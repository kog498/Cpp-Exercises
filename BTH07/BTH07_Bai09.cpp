#include<iostream>
using namespace std;

//Input: ngay, thang, nam
void getData(int& day, int& month, int& year) {
	cout << "Nhap ngay: "; cin >> day;
	cout << "Nhap thang: "; cin >> month;
	cout << "Nhap nam: "; cin >> year;
}

//Output: So ngay cach ngay dau tien trong nam
int findLastDays(int day, int month, int year) {
	int lastDays = 0;
	for (int i = 1; i < month; i++) {
		if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
			lastDays += 31;
		}
		else if (i == 4 || i == 6 || i == 9 || i == 11) {
			lastDays += 30;
		}
		else {
			if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
				lastDays += 29;
			}
			else {
				lastDays += 28;
			}
		}
	}
	return lastDays + day;
}

int main() {
	//Khai bao bien
	int day, month, year;

	//Input
	getData(day, month, year);

	//Processing
	int lastDays = findLastDays(day, month, year);
	
	//Output
	cout << lastDays;
	return 1;
}