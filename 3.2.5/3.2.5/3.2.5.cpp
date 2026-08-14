#include <stdio.h>
#include <conio.h>
void main() {
	int h, a, b, c, d, S, P;
	printf("Chieu cao h:");
	scanf_s("%d", &h);
	printf("Do dai canh ben a:");
	scanf_s("%d", &a);
	printf("Do dai canh ben b:");
	scanf_s("%d", &b);
	printf("Do dai canh day c:");
	scanf_s("%d", &c);
	printf("Do dai canh day d:");
	scanf_s("%d", &d);
	S = ((a + b) * h) / 2;
	P = a + b + c + d;
	printf("Dien tich S = %d va chu vi P = %d", S, P);
		_getch();
}