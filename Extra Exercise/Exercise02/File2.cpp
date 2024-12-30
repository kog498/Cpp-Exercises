#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

const int MAX = 100;

void nhapDsSv(long mssv[], string hoTen[], int& siSo) {
	do {
		cout << "Nhap si so: "; cin >> siSo;
		if (siSo < 1 || siSo > MAX)
			cout << "Si so khong hop le!\n";
	} while (siSo < 1 || siSo > MAX);
	
	for (int i = 0; i < siSo; i++) {
		cout << "> Nhap thong tin SV thu " << i + 1 << ":\n";
		cout << "  - MSSV: "; cin >> mssv[i];
		cout << "  - Ho ten: "; cin.ignore(); getline(cin, hoTen[i]);
	}
}

void xuat1Sv(const long mssv, const string hoTen, const int index) {
	cout << "> Thong tin SV thu " << index + 1 << ":\n";
	cout << "  - MSSV: " << mssv << endl;
	cout << "  - Ho va ten: " << hoTen << endl;
}

void xuatDsSv(const long mssv[], const string hoTen[], const double diemGK[], const double diemCK[], const double diemTK[], const int siSo) {
	for (int i = 0; i < siSo; i++) {
		xuat1Sv(mssv[i], hoTen[i], i);
		cout << "  - Diem GK: " << diemGK[i] << endl;
		cout << "  - Diem CK: " << diemCK[i] << endl;
		cout << "  - Diem TK: " << diemTK[i] << endl;
	}
}

void nhapDiem(const long mssv[], const string hoTen[], double diem[], const int siSo) {
	for (int i = 0; i < siSo; i++) {
		xuat1Sv(mssv[i], hoTen[i], i);
		cout << "Nhap diem: "; cin >> diem[i];
	}
}

double timDiemNhoNhat(const double diem[], const int siSo) {
	double min = INT16_MAX;
	for (int i = 0; i < siSo; i++) {
		if (min > diem[i])
			min = diem[i];
	}
	return min;
}

double timDiemLonNhat(const double diem[], const int siSo) {
	double max = INT16_MIN;
	for (int i = 0; i < siSo; i++) {
		if (max < diem[i])
			max = diem[i];
	}
	return max;
}

double timDiemTB(const double diem[], const int siSo) {
	double tong = 0;
	for (int i = 0; i < siSo; i++) {
		tong += diem[i];
	}
	return tong / siSo;
}

void thongKe(const double diem[], const int siSo) {
	cout << "  - Diem lon nhat: " << timDiemLonNhat(diem, siSo) << endl;
	cout << "  - Diem nho nhat: " << timDiemNhoNhat(diem, siSo) << endl;
	cout << "  - Diem trung binh: " << fixed << setprecision(2) << timDiemTB(diem, siSo) << endl;
}

//Tinh diem tong ket mon hoc cho 1 sinh vien
double tinhDiemTK(const double diemGK, const double diemCK) {
	return diemGK * 0.4 + diemCK * 0.6;
}

double tinhTyLeDiem(const double diem, const double tyLe) {
	return diem * tyLe;
}

void sapXep() {

}

//Thong bao khi chua nhap danh sach SV
void loiNhapDsSv() {
	cout << "Ban chua nhap danh sach sinh vien!\n";
}

//Thong bao khi chua nhap diem
void loiNhapDiem() {
	cout << "Ban chua nhap diem GK hay diem CK\n";
}

int main() {
	long mssv[MAX];
	string hoTen[MAX];
	double diemGK[MAX];
	double diemCK[MAX];
	double diemTK[MAX];
	int siSo;

	int chon;

	//Kiem tra nhap danh sach SV
	bool hopLe1 = false;
	//Kiem tra nhap diem GK
	bool hopLe2 = false;
	//Kiem tra nhap diem CK
	bool hopLe3 = false;
	//Kiem tra tinh diem TK
	bool hopLe4 = false;

	do {
		cout << "==============================\n";
		cout << "CHUONG TRINH QUAN LY SINH VIEN\n";
		cout << "1. Nhap danh sach sinh vien\n";
		cout << "2. Nhap diem giua ky\n";
		cout << "3. Nhap diem cuoi ky\n";
		cout << "4. Thong ke ket qua thi\n";
		cout << "5. Tinh diem tong ket mon hoc\n";
		cout << "0. Ket thuc chuong trinh\n";
		cout << "==============================\n";
		cout << "Nhap lua chon: "; cin >> chon;
		system("cls");

		switch (chon) {
		case 1:
			cout << "(!) NHAP DANH SACH SINH VIEN (!)\n";

			nhapDsSv(mssv, hoTen, siSo);
			hopLe1 = true;

			break;
		case 2:
			cout << "(!) NHAP DIEM GIUA KY (!)\n";

			if (hopLe1) {
				nhapDiem(mssv, hoTen, diemGK, siSo);
				hopLe2 = true;
			}
			else {
				loiNhapDsSv();
			}

			break;
		case 3:
			cout << "(!) NHAP DIEM CUOI KY (!)\n";

			if (hopLe1) {
				nhapDiem(mssv, hoTen, diemCK, siSo);
				hopLe3 = true;
			}
			else {
				loiNhapDsSv();
			}

			break;
		case 4:
			cout << "(!) THONG KE KET QUA THI (!)\n";

			if (hopLe2) {
				cout << "> Thong ke diem GK:\n";
				thongKe(diemGK, siSo);
				cout << endl;
			}
			if (hopLe3) {
				cout << "> Thong ke diem CK:\n";
				thongKe(diemCK, siSo);
			}
			if (!hopLe2 && !hopLe3) {
				loiNhapDiem();
			}

			break;
		case 5:
			cout << "(!) TONG KET MON HOC (!)\n";

			if (hopLe2 && hopLe3) {
				for (int i = 0; i < siSo; i++) {
					xuat1Sv(mssv[i], hoTen[i], i);
					cout << "  - Diem tong ket: " << (diemTK[i] = tinhDiemTK(diemGK[i], diemCK[i])) << endl;
					cout << "  - Ty le diem GK: " << tinhTyLeDiem(diemGK[i], 0.04) << endl;
					cout << "  - Ty le diem CK: " << tinhTyLeDiem(diemCK[i], 0.06) << endl;
					cout << endl;
				}
				hopLe4 = true;
			}
			else {
				loiNhapDiem();
			}
			break;
		case 6:
			cout << "(!) SAP XEP DANH SACH SINH VIEN (!)\n";
			if (hopLe4) {
				int loai;
				cout << "> Sap xep theo:\n";
				cout << "  1. MSSV\n";
				cout << "  2. Ho va ten\n";
				cout << "  3. Diem TB\n";
				do {
					cout << "Nhap lua chon: "; cin >> loai;
					if (loai < 1 || loai > 3)
						cout << "Lua chon khong hop le! Nhap lai!\n";
				} while (loai < 1 || loai > 3);

				int thuTu;
				cout << "> Thu tu sap xep:\n";
				cout << "  1. Sap xep A -> Z, tang dan\n";
				cout << "  2. Sap xep Z -> A, giam dan\n";
				do {
					cout << "Nhap lua chon: "; cin >> thuTu;
					if (thuTu != 1 && thuTu != 2)
						cout << "Lua chon khong hop le! Nhap lai!\n";
				} while (thuTu != 1 && thuTu != 2);

				switch (loai) {
				case 1:
					if (thuTu == 1) {

					}
					break;
				}
			}
		case 0:
			cout << "Cam on vi da su dung chuong trinh!\n";
			break;
		default:
			cout << "Tinh nang khong hop le!\n";
		}
	} while (chon != 0);
	return 1;
}
