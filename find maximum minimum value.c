#include <stdio.h>
#include <limits.h>
#define NUMBER 5 // 배열의 크기를 정해줄 때 C언어에서 이렇게 사용한다 대체적으로


int main(void)
{
	int i, max, min, index;
	int array[NUMBER];
	max = 0;
	index = 0;
	
	// array[0] ~ array[4] : 총 5개가 들어갈 수 있는 크기의 배열 선언

	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(max < array[i])
		{
			max = array[i];
			index = i;
		}
	}
	printf("maximum value = %d. index num = %d.\n", max, index + 1);
	
	min = INT_MAX;
	for(i = 0; i < NUMBER; i++)
	{
		scanf("%d", &array[i]);
		if(min > array[i])
		{
			min = array[i];
			index = i;
		}
	}
	printf("minimum value = %d. index num = %d.\n", min, index + 1);
	return 0;
}