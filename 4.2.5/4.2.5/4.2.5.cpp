#include <stdio.h>
#include <math.h>
#include <conio.h>
void main() {
	int n, nut = 0;
	printf("Nhap so xe 4 chu so:");
	scanf_s("%d", &n);
	while (n > 0) {
		nut = nut + n % 10;
		n = n / 10;
	}
	printf("So nut cua xe la: %d", nut);
	_getch();
}