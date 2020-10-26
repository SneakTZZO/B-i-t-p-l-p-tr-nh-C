#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	float a, x;
	puts("a > 0, a ! 1, x > 0");
	scanf("%f%f", &a, &x);
	printf("a ^ x = %f\n", pow(a, x));
	printf("loga(x) = %f", log(x) / log(a));
	_getch();
	return 0;
}