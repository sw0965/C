#include <stdio.h>

// 특정한 금액을 바당서 가장 적은 거스름돈 화폐의 개수를 구하는 함수.
int smallest(int number)
{
	int count = 0;
	while(number >= 50000)
	{
		number -= 50000;
		count++;
	}
	while(number >= 10000)
	{
		number -= 10000;
		count++;
	}
	while(number >= 5000)
	{
		number -= 5000;
		count++;
	}
	while(number >= 1000)
	{
		number -= 1000;
		count++;
	}
	while(number >= 500)
	{
		number -= 500;
		count++;
	}
	while(number >= 100)
	{
		number -= 100;
		count++;
	}
	while(number >= 50)
	{
		number -= 50;
		count++;
	}
	while(number >= 10)
	{
		number -= 10;
		count++;
	}
	return count;
}


int main(void)
{
	int number;
	printf("enter the price :");
	scanf("%d", &number);
	printf("minimum change = %d\n", smallest(number));
	return 0;
}