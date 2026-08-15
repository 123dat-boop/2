#include <stdio.h>
#include <conio.h>
void main() {
	int gio, phut, giay, Gio, Phut, Giay;
	printf("Nhap gio:");
	scanf_s("%d", &gio);
	printf("Nhap phut:");
	scanf_s("%d", &phut);
	printf("Nhap giay:");
	scanf_s("%d", &giay);
	Gio = 3600 * giay;
	Phut = 60 * giay;
	Giay = Gio + Phut + giay;
	printf("Giay:%d", Giay);
	_getch();
}