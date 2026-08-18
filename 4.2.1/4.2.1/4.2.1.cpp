#include <math.h>
#include <stdio.h>
#include <conio.h>
void main() {
	float x, y, canBacHai, luyThua;
	printf("Nhap he so x:");
	scanf_s("%f", &x);
	printf("Nhap so mu y:");
	scanf_s("%f", &y);
	luyThua = pow(x, y);
	canBacHai = sqrt(x);
	printf("Can bac hai cua x la: %f\n", canBacHai);
	printf("luy thua cua x voi he so mu y la:%f", luyThua);
	_getch();
}