#include <stdio.h>

int main(void)
{
	int x = -50, y = 30;
	int absoluteX = (x > 0) ? x : -x; // 조건 연산자 x가 0보다 크면 x를 반환 x가 0보다 작으면 -x반환  항상 절댓값을 반환 
	int max = (x > y) ? x : y;
	int min = (x < y) ? x : y;
	printf("x의 절댓값은 %d 입니다.\n", absoluteX);
	printf("x와 y 중에서 최댓값은 %d 입니다.\n", max);
	printf("x와 y 중에서 최솟값은 %d 입니다.\n", min);

}