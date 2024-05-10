#include <stdio.h>

// 재귀 함수 (Recursive Function)
void print(int count)
{
	if(count == 0)
	{
		return;
	}
	else
	{
		printf("print char.\n");
		print(count - 1);
	}
}

int main(void)
{
	int number;
	printf("How many char do you want to print?");
	scanf("%d", &number);
	print(number);
	return 0;
}