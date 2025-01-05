#include<iostream>
#include<string>
using namespace std;

int main() {
	int chon;

	const int GIA_PHONG_DON = 500000;
	const int GIA_PHONG_DOI = 800000;
	const int GIA_PHONG_VIP = 1200000;

	const double UU_DAI_10 = 0.1;
	const double UU_DAI_5 = 0.05;

	do {
		cout << "==========MENU==========\n";
		cout << "1. Tinh tien\n";
		cout << "2. Chuong trinh uu dai\n";
		cout << "3. Thong ke khach thue phong\n";
		cout << "4. Tim khach hang luu tru lau nhat\n";
		cout << "0. Thoat chuong trinh\n";
		cout << "========================\n";
		cout << "Nhap lua chon: "; cin >> chon;
		system("cls");

		switch (chon) {
		case 1:
		{
			int loaiPhong, soDem, tongTien;
			cout << "==========Tinh tien==========\n";
			cout << "1. Phong don: 500.000 dong/dem\n";
			cout << "2. Phong doi: 800.000 dong/dem\n";
			cout << "3. Phong VIP: 1.200.000 dong/dem\n";
			cout << "=============================\n";
			cout << "Nhap loai phong: "; cin >> loaiPhong;
			cout << "Nhap so dem: "; cin >> soDem;
			system("cls");

			switch (loaiPhong) {
			case 1:
				tongTien = GIA_PHONG_DON * soDem;
				break;
			case 2:
				tongTien = GIA_PHONG_DOI * soDem;
				break;
			case 3:
				tongTien = GIA_PHONG_VIP * soDem;
				break;
			default:
				cout << "Loai phong khong hop le!\n";
				tongTien = -1;
			}
			cout << "Tien phai tra: " << tongTien << endl;
			break;
		}
		case 2:
		{
			int soTien, soDem;
			double thanhTien;
			cout << "Chuong trinh uu dai\n";
			cout << "Nhap tien thue: "; cin >> soTien;
			cout << "Nhap so dem: "; cin >> soDem;
			if (soDem >= 5) {
				thanhTien = soTien - soTien * UU_DAI_10;
			}
			else if (soDem >= 3) {
				thanhTien = soTien - soTien * UU_DAI_5;
			}
			else {
				thanhTien = soTien;
			}
			cout << "Thanh tien: " << thanhTien << endl;
			break;
		}
		case 3:
		{
			int soLuongKhach, tongSoKhach = 0, soNgayCoKhach = 0;
			int tiepTuc;
			int ngay = 1;
			cout << "Thong ke khach thue phong\n";

			do {
				cout << "Nhap so khach: " << ngay++ << ": "; cin >> soLuongKhach;
				if (soLuongKhach > 0) {
					tongSoKhach += soLuongKhach;
					soNgayCoKhach++;
				}
				cout << "Nhap tiep? (1-Co, 0-Khong): "; cin >> tiepTuc;
			} while (tiepTuc != 0);

			cout << "Tong so luong khach: " << tongSoKhach << endl;
			cout << "So ngay co khach: " << soNgayCoKhach << endl;
			break;
		}
		case 4:
		{
			string tenKH, tenKHMax = "";
			int soDem, soDemMax = INT16_MIN;
			int tiepTuc;
			int dem = 1;
			cout << "Tim khach hang luu tru lau nhat\n";
			do {
				cout << "Khach hang " << dem << ":\n";
				cout << "Ten KH: "; cin.ignore(); getline(cin, tenKH);
				cout << "So dem: "; cin >> soDem;
				if (soDemMax < soDem) {
					tenKHMax = tenKH;
					soDemMax = soDem;
				}
				cout << "Nhap tiep? (1-Co, 0-Khong): "; cin >> tiepTuc;
				dem++;
			} while (tiepTuc != 0);
			
			cout << "KH luu tru lau nhat: " << tenKHMax << " - " << soDemMax << " dem\n";
			break;
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
