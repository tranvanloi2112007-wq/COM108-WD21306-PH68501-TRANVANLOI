#include <stdio.h>
#include <math.h>
#include <string.h>
void kiemTraSoNguyen()
{
    printf("kiem tra so nguyen");
    printf("\n");
}
void demoString() {
    //string
    char mangKyTu[100] = "LOI";  // "LOI" : chuoi ki tu   'L', 'O', 'I' 
    //gets(name);>fgets();

    /*for (int i = 0; i < 3; i++) {
        scanf_s(" %c", &name[i]);
    }*/

    while (getchar() != '\n'); //clear buffer
    {
        printf("%c", getchar());
    }
    printf("Nhap Ten Cua Ban: ");
    fgets(mangKyTu, sizeof(mangKyTu), stdin);
    //xuat du lieu = for + printf

    /*for (int i = 0; i < 3; i++) {
        printf("%c", name[i]);
    }*/

    printf("%s", mangKyTu);
    printf("\n");
    //puts(name);

    printf("String length: ");
    printf("%d", strlen(mangKyTu) - 1);
    printf("\n");
    printf("String Compare The Same As: ");
    printf("%d", strcmp("aBc", "aBc"));
    printf("\n");
    printf("String Compare Less than: ");
    printf("%d", strcmp("A", "C"));
    printf("\n");
    printf("String Compare Greater than: ");
    printf("%d", strcmp("C", "A"));
    printf("\n");

    printf("String Reverse (Encryption): ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Reverse (Decryption): ");
    printf("%s", strrev(mangKyTu));
    printf("\n");
    printf("String Lower: ");
    printf("%s", strlwr(mangKyTu));
    printf("\n");
    printf("String Upper: ");
    printf("%s", strupr(mangKyTu));
    printf("\n");
    printf("Find String in  String: ");
    if (strstr(mangKyTu, "LOI") != NULL) {
        printf("Found");
		printf("%s", strstr(mangKyTu, "LOI"));
    }
    else {
        printf("NOT  FOUND");
	}
}
void demoMang2Chieu()
{
    int array[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Mang[%d][%d]+ ", i, j);
            scanf_s("%d", &array[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d, ", &array[i][j]);
        }
        printf("\n");
    }
}
void lapChucNang(int chonChucNang)
{
    int tiepTuc = 1;
    while (tiepTuc == 1)
    {
        switch (chonChucNang)
        {
        case 1:
            kiemTraSoNguyen();
            break;
        case 2:
            demoString();
            break;
        case 3:
            demoMang2Chieu();
            break;

        case 0:
            return;
        default:
            printf("Chon Lai [1-3]: ");

        }
        printf("\nTiep tuc chuc nang nay? [1=co | 0=Khong");
        scanf_s("%d", &tiepTuc);
        system("cls");//clear
    }
}
int main()
{
    int chonChucNang;
    do
    {
        printf("Menu");
        printf("\n");

        printf("1. kiem tra so nguyen");
        printf("\n");


        printf("2. demoString");
        printf("\n");
        printf("3. demoMang2Chieu");
        printf("\n");

        printf("Moi chon chuc nang[0-3] ");
        printf("\n");
        scanf_s("%d", &chonChucNang);
        if (chonChucNang != 0) {
            lapChucNang(chonChucNang);
        }
    } while (chonChucNang != 0);


}


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



//int main()
//{
//    char ten[50];
//	printf("Nhap Ten Cua Ban: ");
//    puts(ten);
//    gets(ten);
//	printf("Ten Cua Ban La: %s",ten);
//}

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