#include <stdio.h>
#include <math.h>
void kiemTraSoNguyen() {
	int chon;
	do {
		printf("Thuc thi kiem tra so nguyen \n");

		int x;
		int i;
		int sNT = 1;
		int sCP = 0;
		printf("Nhap so nguyen x: ");
		scanf_s("%d", &x);
		if( x != 1){    //kiem tra so nguyen
			printf("Khong phai so nguyen\n");
			
		}
		else{
			printf("La so nguyen\n");
		}
		if (x <= 1) {    //ktra s ngto
			sNT = 0;
		}
		else {
			for (i = 2; i * i <= x; i++) {
				if (x % i == 0) {
					sNT = 0;
					break;
			     }
			}

		}
		if (sNT == 1)
			printf("%d La so nguyen to\n", x);
		else
			printf("%d Khong phai la so nguyen to\n", x);
		for(i = 0; i*i <= x;i++){   //ktra scp
			if (i * i == x) {
				sCP = 1;
				break;
			}
		}
		if (sCP == 1) 
			printf("%d La so chinh phuong\n", x);
		
		else 
			printf("%d Khong phai la so chinh phuong\n", x);
		
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
		
	} while (chon == 1);
}

void timUocSoCHungVaBoiChungCuaHaiso() {
	int chon;
	do {
		printf("Tim Uoc So Chung Va Boi Chung Cua Hai So \n");
		int x, y;
		int a, b;
		printf("Nhap x: ");
		scanf_s("%d", &x);
		printf("Nhap y: ");	
		scanf_s("%d", &y);
		a = x;
		b = y;
		while (a != b) {
			if (a > b)
				a = a - b;
			else
				b = b - a;
		}
		int uocSoChungLonNhat = a;
		int boiSoChungNhoNhat = (x * y) / uocSoChungLonNhat;
		printf("Uoc so chung lon nhat la: %d\n", uocSoChungLonNhat);
		printf("Boi so chung nho nhat la: %d\n",  boiSoChungNhoNhat);
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void tinhTienChoQuanKaraoke() {
	int chon;
	do {
		printf(" Tinh Tien Cho Quan Karaoke \n");
		int gioBatDau, gioKetThuc;
		int soGio;
		float tongTien;
		printf("Nhap gio bat dau: ");
		scanf_s("%d", &gioBatDau);
		printf("Nhap gio ket thuc: ");	
		scanf_s("%d", &gioKetThuc);
		if (gioBatDau < 12 || gioKetThuc> 23 || gioBatDau >= gioKetThuc) {
						printf("Khong hop le. Vui long nhap lai!\n");
						break;
		}
		soGio = gioKetThuc - gioBatDau;
		if (soGio <= 3) {
			tongTien = soGio * 150000;
		}
		else {
			tongTien = 3 * 150000; //3h dau
			tongTien += (soGio -3) * (150000 * 0, 7);  //h t4 gam 30%
		}
		if (gioBatDau >= 14 && gioBatDau <= 17) {
			tongTien = tongTien * 0, 9;	//10%
		}
		printf("Tong tien can thanh toan la: %.0f\n ", tongTien);
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void tinhTienDien() {
	int chon;
	int kwh;
	int tongTien;
	do {
		printf("Tinh Tien Dien \n");

		printf("Nhap so kwh: \n");
		scanf_s("%d", &kwh);
		if( kwh <= 50){
			tongTien = kwh * 1678;
		}
		else if( kwh <= 100){
			tongTien = 50 * 1678 + (kwh - 50) * 1734;
		}
		else if( kwh <= 200){
			tongTien = 50 * 1678 + 50 * 1734 + (kwh - 100) * 2014;
		}
		else if( kwh <= 300){
			tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + (kwh - 200) * 2536;
		}
		else if( kwh <= 400){
			tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + (kwh -300) * 2834;
		}
		else {
			tongTien = 50 * 1678 + 50 * 1734 + 100 * 2014 + 100 * 2536 + 100 * 2834 + (kwh -400) *2927;
		}
		printf("Tong tien dien phai tra la: %.0d \n", tongTien);

		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void chucnangDoiTien() {
	int chon;
	int soTien;
	int menhGia[] = { 500, 200,100,50,20,10,5,2,1 };	
	int soTo[9] = { 0 };
	int i;

	do {
		printf("Chuc Nang Doi Tien \n");

		printf("Nhap so tien: ");
		scanf_s("%d", &soTien);
		for (i = 0; i < 9; i++) {
			soTo[i] = soTien / menhGia[i]; //so to

			if (soTo[i] > 0) {
				printf("%d to menh gia %d\n", soTo[i], menhGia[i]);
			}
			soTien = soTien % menhGia[i]; //so tien con lai
		}

		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void chucNangTinhLaiXuatVayNganHangVayTraGop() {
	int chon;
	do {
		printf("Chuc Nang Tinh Lai Xuat Vay Ngan Hang Vay TRa Gop  \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void vayTienMuaXe() {
	int chon;
	do {
		printf("Vay Tien Mua Xe \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void xapXepThongTinSinhVien() {
	int chon;
	do {
		printf("Xap Xep Thong Tin Sinh Vien \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void xayDungGameFPOLYLOTT() {
	int chon;
	do {
		printf("Xay Dung Game \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

void tinhToanPhanSo() {
	int chon;
	do {
		printf("Tinh Toan Phan So \n");
		printf("Tiep tuc chuc nang [1|khac]: ");
		scanf_s("%d", &chon);
	} while (chon == 1);
}

int main()
{
	int chon;
	do {
		printf("=====Menu Chuong Trinh=====");
		printf("\n");

		printf("1. Kiem Tra So Nguyen");
		printf("\n");

		printf("2. Tim Uoc So Chung Va Boi Chung Cua Hai So");
		printf("\n");

		printf("3. Tinh Tien Cho Quan Karaoke");
		printf("\n");

		printf("4. Tinh Tien Dien");
		printf("\n");

		printf("5. Chuc Nang Doi Tien");
		printf("\n");

		printf("6. Chuc nang Tinh Lai Xuat Vay Ngan Hang Vay Tra Gop");
		printf("\n");

		printf("7. Vay Tien Mua Xe");
		printf("\n");

		printf("8. Xap Xep Thong Tin SInh Vien");
		printf("\n");

		printf("9. Xay Dung Game");
		printf("\n");

		printf("10. Tinh Toan Phan So");
		printf("\n");
		printf("-1. Thoat chuong Trinh ");
		printf("\n");
		printf("=============================\n");
		printf("Chon chuc Nang: ");

		scanf_s("%d", &chon);
		switch (chon) {
		case 1:
			kiemTraSoNguyen();
			break;
		case 2:
			timUocSoCHungVaBoiChungCuaHaiso();
			break;
		case 3:
			tinhTienChoQuanKaraoke();
			break;
		case 4:
			tinhTienDien();
			break;
		case 5:
			chucnangDoiTien();
			break;
		case 6:
			chucNangTinhLaiXuatVayNganHangVayTraGop();
			break;
		case 7:
			vayTienMuaXe();
			break;
		case 8:
			xapXepThongTinSinhVien();
			break;
		case 9:
			xayDungGameFPOLYLOTT();
			break;
		case 10:
			tinhToanPhanSo();
			break;

		default:
			printf("Hay chon lai tu cn [1-10]");
			break;
		}

	} while (chon != -1);

}

