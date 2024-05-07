#include <stdio.h>

int main(void)
{
	int x, i;
	printf("Enter an integer : ");
	scanf("%d", &x);
	for(i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", x, i, x*i);
	}
	return 0;
}