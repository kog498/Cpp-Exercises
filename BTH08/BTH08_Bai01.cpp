#include<iostream>
using namespace std;

int main() {
	const int MAXSIZE = 50;
	double alpha[MAXSIZE];

	for (int i = 0; i < 25; i++) {
		alpha[i] = pow(i, 2);
	}

	for (int i = 25; i < MAXSIZE; i++) {
		alpha[i] = pow(i, 3);
	}

	for (int i = 0; i < MAXSIZE; i++) {
		cout << alpha[i] << " ";
		if ((i + 1) % 10 == 0) cout << endl;
	}
	return 1;
}
