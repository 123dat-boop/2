#include <stdio.h>
#include <conio.h>
void main() {
	int Ngay, Thang, Nam;
	printf("Nhap ngay sinh: ");
	scanf_s("%d", &Ngay);
	printf("Nhap thang sinh: ");
	scanf_s("%d", &Thang);
	printf("Nhap nam sinh: ");
	scanf_s("%d", &Nam);
	printf("Ban sinh vao %d/%d/%d", Ngay, Thang, Nam);
	_getch();
}