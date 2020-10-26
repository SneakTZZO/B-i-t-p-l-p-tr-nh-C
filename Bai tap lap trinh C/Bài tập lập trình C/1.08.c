#include<stdio.h>
#include<conio.h>
#include<math.h>
#define string "----------"

int main()
{
	short a, b;
	int rs = 0;
	short c;
	scanf("%hi%hi", &a, &b);
	printf("%10hi\nx%9hi\n", a, b);
	puts(string);
	for (int i = 0; i < 3; i++)
	{
		// lay tung so cua b
		c = b % 10;
		b /= 10;
		// nhan c voi a
		if (i == 0)
			printf("%10d\n", c * a);
		else
			if (i == 1)
				printf("%9d\n", c * a);
			else
			{
				printf("%8d\n", c * a);
				puts(string);1
			}
		rs += c * a * pow(10, i);
	}
	printf("%10d", rs);
	_getch();
	return 0;
}