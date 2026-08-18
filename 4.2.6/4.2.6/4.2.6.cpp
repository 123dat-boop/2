#include <stdio.h>
#include <conio.h>
#include <math.h>
void main() {
	int giay, phut, gio, soGiay, thoiGianDu;
	printf("Nhap so giay lam viec:");
	scanf_s("%d", &soGiay);
	gio = soGiay / 3600;
	thoiGianDu = soGiay % 3600;
	phut = thoiGianDu / 60;
	giay = thoiGianDu % 60;
	printf("%d gio %d phut %d giay", gio, phut, giay);
	_getch();
}