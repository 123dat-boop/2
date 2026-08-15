#include <stdio.h>
#include <conio.h>
void main()
{
	char Name[50];
	int SoLuong, DonGia, Tien, VAT;
	printf("Nhap ten san pham:");
	scanf_s(" %[^\n]", Name, 50); 
	// %[^\n] đọc cho đến khi gặp Enter
	// %s đọc cho đến khi gặp dấu cách
	printf("Nhap so luong:");
	scanf_s("%d", &SoLuong);
	printf("Nhap don gia:");
	scanf_s("%d", &DonGia);
	Tien = SoLuong * DonGia;
	VAT = ( Tien / 100 ) * 10;
	printf("Ten san pham: %s\n", Name);
	printf("So Luong: %d\n", SoLuong);
	printf("Thanh tien: %d\n", Tien);
	printf("VAT: %d\n", VAT);
	_getch();
}