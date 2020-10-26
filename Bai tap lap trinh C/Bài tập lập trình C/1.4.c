#include<stdio.h>
#include<conio.h>

int main()
{
	// 2 số thực đọc vào từ bàn phím
	float a, b;
	scanf("%f%f", &a, &b);
	// 4 phép tính số học
	printf("%f\n", a + b);
	printf("%f\n", a - b);
	printf("%f\n", a * b);
	printf("%f", a / b);
	_getch();
	return 0;
}