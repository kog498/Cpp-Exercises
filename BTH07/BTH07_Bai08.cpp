#include<iostream>
using namespace std;

//Input: n
void getData(int& n) {
	cout << "Nhap n: "; cin >> n;
}

//Output: Tim so Fibonacci thu n
/*
* Giai thich chuoi Fibonacci:
* Chuoi fibonacci la day so bat dau tu 2 so 0 va 1, cac so tiep theo bang tong 2 so lien ke truoc do cong lai
* VD: 0 1 1 2 3 5 8 13...
*/
int timSoFibonacci(int n) {
	int firstValue = 0;
	int secondValue = 1;
	int sum = 0;

	if (n == 1) {
		return 0;
	}
	else if (n == 2) {
		return 1;
	}
	else {
		for (int i = 3; i <= n; i++) {
			sum = firstValue + secondValue;
			firstValue = secondValue;
			secondValue = sum;
		}
		return sum;
	}
}

int main() {
	//Khai bao bien
	int n;

	//Input
	getData(n);

	//Processing
	int result = timSoFibonacci(n);

	//Output
	cout << "So can tim: " << result << endl;

	return 1;
}