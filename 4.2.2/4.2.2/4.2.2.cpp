#include <math.h>
#include <stdio.h>
#include <conio.h>
void main() {
	float a, P, S;
	printf("Nhap do dai cua canh a:");
	scanf_s("%f", &a);
	P = 4 * a;
	S = pow(a, 2);
	printf("Chu vi hinh vuong la %f, dien tich hinh vuong la %f", P, S);
	_getch();
}