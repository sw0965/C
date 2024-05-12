#include <stdio.h>

int main(void)
{
	
	int score[5][2]; //학생 숫자 = 5 , 영어 수학 = 2
	int total[2] = {0, }; // 1차원 데이터에 값을 할당 할 때 모든 데이터의 값을 0으로 
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("%d student math, eng results : ", i + 1);
		scanf("%d %d", &score[i][0], &score[i][1]);
	}
	
	for(i=0; i<5; i++)
	{
		total[0] += score[i][0];
		total[1] += score[i][1];
	}
	
	printf("\n\n5 students math results : %d\n", total[0]);
	printf("5 students eng results : %d\n", total[1]);
	return 0;
}