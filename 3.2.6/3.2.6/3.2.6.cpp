#include <stdio.h>
#include <conio.h>
void main() {
	char Input;
	int a, b;
	printf("Nhap ki tu bat ky:");
		scanf_s("%c", &Input);
		a = Input - 1;
		b = Input + 1;
		printf("Output: %d, (Ma dung truoc: %d, Ma dung sau: %d)", Input, a, b);
		_getch();
}