#include <stdio.h>
#include <conio.h>
void main() {
	int ChieuDai, ChieuRong, DienTich, ChuVi;
	printf("Nhap chieu dai:");
	scanf_s("%d", &ChieuDai);
	printf("Nhap chieu rong:");
	scanf_s("%d", &ChieuRong);
	DienTich = ChieuDai * ChieuRong;
	ChuVi = (ChieuDai + ChieuRong) * 2;
	printf("Dien tich la: %d va Chu vi la %d", DienTich, ChuVi);

}