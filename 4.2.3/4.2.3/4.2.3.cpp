#include <math.h>
#include <stdio.h>
#include <conio.h>
void main() {
	float r, P, S;
	const double PI = 3.14;
	printf("Nhap ban kinh duong tron r: ");
	scanf_s("%f", &r);
	P = 2 * r * PI;
	S = PI * pow(r, 2);
	printf("Chu vi P: %f va Dien tich S: %f", P, S);
	_getch();
}