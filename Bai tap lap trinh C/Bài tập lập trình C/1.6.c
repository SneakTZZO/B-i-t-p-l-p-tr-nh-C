#include<stdio.h>
#include<conio.h>

int main()
{
	int arr[6];
	int sum = 0;
	//nhap so luong to tien
	printf("so luong to tien 500000, 100000, 50000, 5000, 1000, 200 lan luot la: ");
	for (int i = 0; i < 6; i++)
	{
		scanf("%d", arr + i);
	}
	// tinh tong so tien
	sum = arr[0] * 5000 + arr[1] * 1000 + arr[2] * 500 + arr[3] * 50 + arr[4] * 10 + arr[5] * 2;
	printf("%d", sum * 100);
	_getch();
	return 0;
}