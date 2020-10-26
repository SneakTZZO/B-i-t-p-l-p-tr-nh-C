#include<stdio.h>
#include<conio.h>
#define string "TURBO C"
#define space "    "

/*
WAY 01
void main()
{
	printf(string"\n"string"\n"space string"\n"space space string"\n"space space space string);
	_getch();
}
*/

void main()
{
	printf(string"\n" string"\n");
	printf("%8s\n", string);
	printf("%16s\n", string);
	printf("%21s\n", string);
	_getch();
}