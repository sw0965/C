#include <stdio.h>

int main(void)
{
	int x = 0;
	printf("now x = %d.\n", x);   //  0
	x++;
	printf("now x = %d.\n", x);   //  1
	printf("now x = %d.\n", x--); //  1 (-1 after print)
	printf("now x = %d.\n", x);   //  0
	printf("now x = %d.\n", --x); // -1

	return 0;
}