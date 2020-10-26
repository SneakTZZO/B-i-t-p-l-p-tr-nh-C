#include<stdio.h>
#include<conio.h>

int main()
{
	//viet chuong trinh nhap vao so giay, sau do dua ket qua ra man hinh dang hh:mm:ss
	// nhap so giay
	int h = 0, m = 0, s;
	int n;
	scanf("%d", &s);
	//quy doi
	h = s / 3600;
	s %= 3600;
	m = s / 60;
	s %= 60;
	printf("%d:%d:%d", h, m, s);
	_getch();
	return 0;
}