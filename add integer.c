#include <stdio.h>

int main(void)
{
	int number, x, i, sum = 0;
	printf("Enter the number of integers : ");
	scanf("%d", &number);
	for(i = 0; i < number; i++)
	{
		printf("Enter the value of integers : ");
		scanf("%d", &x);
		sum += x;
	}
	printf("The value of the whole integer is %d \n", sum);
	return 0;
}