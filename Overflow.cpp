#include <stdio.h>
#include <limits.h> // 이게 있어야 INT_MAX를 사용하려면 limits.h 헤더파일이 필요함
int main(void)
{
	int x = INT_MAX; // C 언어에서 제공하는 인트형 최고 값 21억정도 된다.
	printf("int형의 최댓값 x는 %d 입니다.\n", x);
	printf("x + 1")
	return 0;
}
