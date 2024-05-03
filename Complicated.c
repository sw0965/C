#include <stdio.h>
//Compound Assignment Operators
int main(void)
{
	int x = 100;
	printf("now x = %d\n", x); // 100
	x += 50;
	printf("now x = %d\n", x); // 150
	x -= 50;
	printf("now x = %d\n", x); // 100
	x *= 50;
	printf("now x = %d\n", x); // 5000
	x /= 50;
	printf("now x = %d\n", x); // 100
	x %= 2;
	printf("now x = %d\n", x); // 0
	return 0;
}