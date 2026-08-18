#include <stdio.h>
#include <conio.h>
#include <math.h>
void main() {
	float x, Y;
	printf("Nhap gia tri cua x:");
	scanf_s("%f", &x);
	Y = 3 * pow(x, 3) - 5 * pow(x, 2) + 6;
	printf("Gia tri cua bieu thuc voi x = %f la %f", x, Y);
	_getch();
}