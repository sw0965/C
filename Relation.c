#include <stdio.h>

int main(void)
{
	int x = 50, y = 30;
	// x 가 y와 같은 값을 가지고 있는가?
	// x = y -> x와 y 가 같은 상황 그 자체를 의미한다.
	// x == y -> true, x와 y가 같은 값을 가지고 있다.
	printf("x가 y와 같은 값인가? %d\n", x == y); // 0 = false
	printf("x가 y와 같은 값인가? %d\n", x != y); // 1 = true
	printf("x가 y와 같은 값인가? %d\n", x > y); // 1 = true
	printf("x가 y와 같은 값인가? %d\n", x < y); // 1 = true

	//printf("x에 y값을 넣으면? %d\n", x = y); // 
	if(x == y)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}

	return 0;
}