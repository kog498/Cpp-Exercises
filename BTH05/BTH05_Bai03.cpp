#include<iostream>
#include<cmath>
using namespace std;

double round(double n) {

}

int main() {
	int n;
	do {
		cout << "Nhap n = "; cin >> n;
		if (n < 1) cout << "n khong hop le! (n >= 1)\n";
	} while (n < 1);

	double s1 = 0, s2 = 0, s3 = 0;

	for (int i = 1; i <= n; i++) {
		s1 += pow(i, 2);
		s2 += (double) 1 / i;
		s3 += (double) 1 / (2 * i - 1);
	}

	cout << "S1 = " << s1 << endl;
	cout << "S2 = " << s2 << endl;
	cout << "S3 = " << s3 << endl;
	return 1;
}