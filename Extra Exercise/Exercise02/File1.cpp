#include<iostream>
#include<string>
using namespace std;

const int MAX = 100;

//Nhap danh sach sinh vien dau vao gom MSSV, Ho va Ten
void nhapDanhSachSv(long mssv[], string hoTen[], int& siSo) {
	do {
		cout << "Nhap si so lop: "; cin >> siSo;
		if (siSo < 1 || siSo > MAX)
			cout << "Si so lop khong hop le!\n";
	} while (siSo < 1 || siSo > MAX);

	for (int i = 0; i < siSo; i++) {
		cout << "Nhap thong tin sinh vien " << i + 1 << ":\n";
		cout << "MSSV: "; cin >> mssv[i];
		cout << "Ho va ten: "; cin.ignore(); getline(cin, hoTen[i]);
	}
}

void xuatMotSv(const long mssv[], const string hoTen[], const double diemGK[], const double diemCK[], const double diemTongKet[], const int x) {
	cout << "Thong tin sinh vien " << x + 1 << ":\n";
	cout << "MSSV: " << mssv[x] << endl;
	cout << "Ho va ten: " << hoTen[x] << endl;
	cout << "Diem giua ky: " << diemGK[x] << endl;
	cout << "Diem cuoi ky: " << diemCK[x] << endl;
	cout << "Diem tong ket: " << diemTongKet[x] << endl;
}

//Duoc goi toi khi da nhap du MSSV, Ho va Ten, Diem GK va Diem CK
void xuatDanhSachSv(const long mssv[], const string hoTen[], const double diemGK[], const double diemCK[], const double diemTongKet[], const int siSo) {
	cout << "===============================\n";
	cout << "Danh sach SV Khoa CNTT:\n";

	for (int i = 0; i < siSo; i++) {
		cout << endl;
		xuatMotSv(mssv, hoTen, diemGK, diemCK, diemTongKet, i);
	}

	cout << "===============================\n";
}

//Tinh diem GK va CK
void nhapDiem(double diem[], const int siSo) {
	for (int i = 0; i < siSo; i++) {
		cout << "Nhap diem sinh vien " << i + 1 << ": ";
		cin >> diem[i];
	}
}

//Thong ke
double timDiemMin(const double diem[], const int siSo) {
	int min = INT16_MAX;
	for (int i = 0; i < siSo; i++) {
		if (min > diem[i])
			min = diem[i];
	}
	return min;
}

double timDiemMax(const double diem[], const int siSo) {
	int max = INT16_MIN;
	for (int i = 0; i < siSo; i++) {
		if (max < diem[i])
			max = diem[i];
	}
	return max;
}

double timDiemTB(const double diem[], const int siSo) {
	int tong = 0;
	for (int i = 0; i < siSo; i++) {
		tong += diem[i];
	}
	return tong / siSo;
}

//Tinh diem tong ket mon hoc
double tinhDiemTongKet(const double diemGK, const double diemCK) {
	return diemGK * 0.4 + diemCK * 0.6;
}

//Tinh va nhap diem tong ket vao mang diemTongKet[]
void nhapDiemTongKet(double diemGK[], double diemCK[], double diemTongKet[], const int siSo) {
	for (int i = 0; i < siSo; i++) {
		diemTongKet[i] = tinhDiemTongKet(diemGK[i], diemCK[i]);
	}
}

double tinhTyLeDiemGK(const double diem) {
	return diem * 4 / 100;
}

double tinhTyLeDiemCK(const double diem) {
	return diem * 6 / 100;
}

// Ham tim kiem vi tri sinh vien trong danh sach theo MSSV voi x la MSSV can tim kiem trong danh sach
int timKiem(const long mssv[], const int siSo, const int x) {
	for (int i = 0; i < siSo; i++) {
		if (x == mssv[i])
			return i;
	}
	return -1;
}

int timKiem(const string hoTen[], const int siSo, const string x) {
	for (int i = 0; i < siSo; i++) {
		if (x == hoTen[i])
			return i;
	}
	return -1;
}

// Loc danh sach theo diem tong ket voi dieu kien diem tong ket < x
void locDanhSach(const long mssv[], const string hoTen[], const double diemGK[], 
	const double diemCK[], const double diemTongKet[], const int siSo, int x) {

	cout << "===============================\n";
	cout << endl;

	if (x >= 0) {
		for (int i = 0; i < siSo; i++) {
			if (diemTongKet[i] >= x) {
				xuatMotSv(mssv, hoTen, diemGK, diemCK, diemTongKet, i);
				cout << endl;
			}
		}
	}
	else {
		for (int i = 0; i < siSo; i++) {
			if (diemTongKet[i] <= -x) {
				xuatMotSv(mssv, hoTen, diemGK, diemCK, diemTongKet, i);
				cout << endl;
			}
		}
	}

	cout << "===============================\n";
}

void sapXep(long mssv[], string hoTen[], double diemGK[], double diemCK[], double diemTongKet[], const int siSo, const int luaChon, const int thuTu) {
	switch (luaChon) {
	// Sap xep theo MSSV
	case 1:
		break;
	case 2:
		break;
	case 3:
		if (thuTu == 1) {
			for (int i = 0; i < siSo - 1; i++) {
				for (int j = i + 1; j < siSo; j++) {
					if (diemTongKet[i] > diemTongKet[j]) {
						swap(mssv[i], mssv[j]);
						swap(hoTen[i], hoTen[j]);
						swap(diemGK[i], diemGK[j]);
						swap(diemCK[i], diemCK[j]);
						swap(diemTongKet[i], diemTongKet[j]);
					}
				}
			}
		}
		else {
			for (int i = 0; i < siSo - 1; i++) {
				for (int j = i + 1; j < siSo; j++) {
					if (diemTongKet[j] > diemTongKet[i]) {
						swap(mssv[i], mssv[j]);
						swap(hoTen[i], hoTen[j]);
						swap(diemGK[i], diemGK[j]);
						swap(diemCK[i], diemCK[j]);
						swap(diemTongKet[i], diemTongKet[j]);
					}
				}
			}
		}
		break;
	}
}

int main() {
	long mssv[MAX];
	string hoTen[MAX];
	double diemGK[MAX];
	double diemCK[MAX];
	double diemTongKet[MAX];
	int siSo = -1;

	int choice;

	do {
		cout << "===============================\n";
		cout << "CHUONG TRINH QUAN LY SINH VIEN\n";
		cout << "1. Nhap danh sach sinh vien\n";
		cout << "2. Nhap diem giua ky\n";
		cout << "3. Nhap diem cuoi ky\n";
		cout << "4. Thong ke\n";
		cout << "5. Tinh diem tong ket mon hoc\n";
		cout << "6. Sap xep danh sach sinh vien\n";
		cout << "7. Loc danh sach sinh vien\n";
		cout << "8. Tim va xuat ket qua\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "===============================\n";
		cout << "Nhap lua chon: "; cin >> choice;

		system("cls");

		switch (choice) {
		case 1:
			cout << "Nhap danh sach sinh vien\n";
			nhapDanhSachSv(mssv, hoTen, siSo);
			break;
		case 2:
			cout << "Nhap diem giua ky\n";
			nhapDiem(diemGK, siSo);
			break;
		case 3:
			cout << "Nhap diem cuoi ky\n";
			nhapDiem(diemCK, siSo);
			break;
		case 4:
			cout << "Thong ke\n";
			cout << "Diem giua ki:\n";
			cout << " - Cao nhat: " << timDiemMax(diemGK, siSo) << endl;
			cout << " - Thap nhat: " << timDiemMin(diemGK, siSo) << endl;
			cout << " - Trung binh: " << timDiemTB(diemGK, siSo) << endl;
			cout << endl;
			cout << "Diem cuoi ki:\n";
			cout << " - Cao nhat: " << timDiemMax(diemCK, siSo) << endl;
			cout << " - Thap nhat: " << timDiemMin(diemCK, siSo) << endl;
			cout << " - Trung binh: " << timDiemTB(diemCK, siSo) << endl;
			break;
		case 5:
			cout << "Tinh diem tong ket mon hoc\n";
			nhapDiemTongKet(diemGK, diemCK, diemTongKet, siSo);
			for (int i = 0; i < siSo; i++) {
				cout << endl;
				cout << "Tong ket mon hoc sinh vien " << i + 1 << ":\n";
				cout << "Diem mon: " << diemTongKet[i] << " / 10" << endl;
				cout << "Ty le diem GK: " << tinhTyLeDiemGK(diemGK[i]) * 100 << " / 40" << endl;
				cout << "Ty le diem CK: " << tinhTyLeDiemCK(diemCK[i]) * 100 << " / 60" << endl;
			}
			break;
		case 6:
		{
			int luaChon;
			int thuTu;
			cout << "Sap xep danh sach sinh vien\n";
			cout << "1. Theo MSSV\n";
			cout << "2. Theo Ho va Ten\n";
			cout << "3. Theo Diem tong ket\n";

			do {
				cout << "Nhap lua chon: "; cin >> luaChon;
				if (luaChon < 1 || luaChon > 3)
					cout << "Lua chon khong hop le!\n";
			} while (luaChon < 1 || luaChon > 3);

			cout << "Lua chon thu tu sap xep:\n";
			cout << "1. A -> Z, tang dan\n";
			cout << "2. Z -> A, giam dan\n";

			do {
				cout << "Nhap lua chon: "; cin >> thuTu;
				if (thuTu != 1 && thuTu != 2)
					cout << "Lua chon khong hop le!\n";
			} while (thuTu != 1 && thuTu != 2);

			sapXep(mssv, hoTen, diemGK, diemCK, diemTongKet, siSo, luaChon, thuTu);
			xuatDanhSachSv(mssv, hoTen, diemGK, diemCK, diemTongKet, siSo);
			break;
		}
		case 7:
		{
			int luaChon;
			int x;
			cout << "Loc danh sach sinh vien theo diem tong ket mon hoc\n";
			cout << "1. Dieu kien: diem <= x\n";
			cout << "2. Dieu kien: diem >= x\n";
			do {
				cout << "Nhap lua chon: "; cin >> luaChon;
				switch (luaChon) {
				case 1:
					cout << "Nhap x: "; cin >> x;
					locDanhSach(mssv, hoTen, diemGK, diemCK, diemTongKet, siSo, -x);
					break;
				case 2:
					cout << "Nhap x: "; cin >> x;
					locDanhSach(mssv, hoTen, diemGK, diemCK, diemTongKet, siSo, x);
					break;
				default:
					cout << "Lua chon khong hop le! Nhap lai!\n";
				}
			} while (luaChon != 1 && luaChon != 2);
			break;
		}
		case 8:
		{
			int luaChon;
			long x; // MSSV can tim
			string y; // Ho va Ten can tim
			int viTri;

			cout << "Tim va xuat ket qua\n";
			cout << "1. Tim theo MSSV\n";
			cout << "2. Tim theo Ho va Ten\n";
			do {
				cout << "Nhap lua chon: "; cin >> luaChon;
				switch (luaChon) {
				case 1:
					cout << "Nhap MSSV can tim: "; cin >> x;
					viTri = timKiem(mssv, siSo, x);
					break;
				case 2:
					cout << "Nhap Ho va Ten can tim: ";
					cin.ignore();
					getline(cin, y);
					viTri = timKiem(hoTen, siSo, y);
					break;
				default:
					cout << "Lua chon khong hop le! Nhap lai!\n";
				}
			} while (luaChon != 1 && luaChon != 2);

			system("cls");

			xuatMotSv(mssv, hoTen, diemGK, diemCK, diemTongKet, viTri);
			break;
		}
		case 0:
			cout << "Thoat chuong trinh\n";
			break;
		default:
			cout << "Tinh nang ngoai he thong!\n";
		}
	} while (choice != 0);
	return 1;
}
