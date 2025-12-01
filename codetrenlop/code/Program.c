#include<math.h>
#include <stdio.h>

//void kiemTraSoNguyen()
//{ 
//    printf("kiem tr so nguyen");
//	printf("\n");
//}
//void lapChucNang(int chonChucNang)
//{
//    int tiepTuc = 1;
//    while (tiepTuc==1)
//    {
//        switch (chonChucNang)
//        {
//            case 1:
//				kiemTraSoNguyen();
//                break;
//			case 2:
//                break;
//            case 3:
//                return;
//            case 0:
//                return;
//            default:
//				printf("Chon Lai [1-3]: ");
//				
//        }
//        printf("Tiep tuc chuc nang nay? [1=co | 0=Khong");
//		scanf_s("%d", &tiepTuc);
//        system("cls");//clear
//    }
//}
//int main()
//{
//    int chonChucNang;
//    do
//    {
//        pritf("Menu");
//        printf("\n");
//    
//        pritf("1. kiem tra so nguyen");
//        printf("\n");
//    
//        pritf("2. boi chung | uoc chung");
//        printf("\n");
//    
//        pritf("Moi chon chuc nang[0-3] ");
//        printf("\n");
//		scanf_s("%d", &chonChucNang);
//		lapChucNang(chonChucNang);  
//    } while (chonChucNang != 0);
//
//        return 0;
//    
//}

//int main()
//{
//	int n;
//    int y[3];
//    int tong = 0;
//    printf("Nhap So Luong Phan Tu: \n");
//    scanf_s("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//                printf("Nhap Gia TRi Phan Tu  %d: ", i+1);
//				scanf_s("%d", &y[i]);
//    }
//    
//   
//    for (int i = 0; i < n; i++) {
//        printf("%d ", y[i]);
//		tong += y[i];
//    }
//    
//    
//	printf("Tong Cac Phan Tu Trong Mang La: %d", tong);
//    return 0;
//}

int main()
{
    char ten[50];
	printf("Nhap Ten Cua Ban: ");
    puts(ten);
    gets(ten);
	printf("Ten Cua Ban La: %s",ten);
}

// Debug/Run chuong trinh: bam "F5" hoac "Debug > Start Debugging" tren menu

// Danh cho nguoi moi bat dau:
//   1. Dung "Solution Explorer window" de them/quan ly cac files
//   2. Dung "Output window" de kiem tra "build output" va "cac thong bao khac"
//   3. Dung "Error List window" de xem loi
//   4. Chon "Project > Add New Item" de tao moi file code,
//      hoac "Project > Add Existing Item" de them file da ton tai vao project nay.
//   5. Sau nay, de mo lai project nay,
//      chon "File > Open > Project" va chon file *.sln
//      Co the xem thu muc project, noi luu file *.sln bang cach
//      bam phim chuot phai vao "Solution" > chon "Open Folder in File Explorer"

// GV: AnhTT184