#include<iostream>
using namespace std;

/*
INPUT SECTION
*/

//Input: So nguyen n >= 0
void nhapDuLieu(int& n) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n < 0) cout << "n khong hop le! (n >= 0)\n";
	} while (n < 0);
}

//Input: So nguyen n >= 0, k >= 0
void nhapDuLieu(int& n, int& k) {
	do {
		cout << "Nhap n: "; cin >> n;
		if (n < 0) cout << "n khong hop le! (n >= 0)\n";
	} while (n < 0);
	do {
		cout << "Nhap k: "; cin >> k;
		if (k < 0) cout << "k khong hop le! (k >= 0)\n";
	} while (k < 0);
}


/*
OUTPUT SECTION
*/


//Output: Giai thua n!
int tinhGiaiThua(int n) {
	int giaiThua = 1;
	for (int i = 1; i <= n; i++) {
		giaiThua = giaiThua * i;
	}
	return giaiThua;
}

//Output: Tinh to hop n chap k
int tinhToHop(int n, int k, int& toHop) {
	if (n >= k) {
		toHop = tinhGiaiThua(n) / (tinhGiaiThua(k) * tinhGiaiThua(n - k));
	}
	else {
		return 0;
	}
}

//Output: In ra tam giac Pascal
/* Vi du:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/
void inTamGiacPascal(int n) {
	int coef = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || i == 0) {
				coef = 1;
			}
			else {
				coef = coef * (i - j + 1) / j;
			}
			cout << coef << " ";
		}
		cout << endl;
	}
}

int main() {
	//Khai bao bien
	int n, k;
	int toHop;

	/*
	Test Case A
	*/

	//Input
	nhapDuLieu(n);

	//Processing
	int giaiThua = tinhGiaiThua(n);

	//Output
	cout << n << "! = " << giaiThua << endl;


	/*
	Test Case B
	*/

	//Input
	nhapDuLieu(n, k);

	//Processing
	toHop = tinhToHop(n, k, toHop);

	//Output
	if (toHop != 0) {
		cout << "C(" << n << "; " << k << ") = " << toHop << endl;
	}
	else {
		cout << "Loi toan! (Dieu kien: n >= k)\n";
	}

	/*
	Test Case C
	*/

	//Input
	nhapDuLieu(n);

	//Processing & Output
	inTamGiacPascal(n);

	return 1;
}