#include <stdio.h>


int getDays(int month, int day)
{
	int i, sum = 0;
	for(i = 1; i < month; i++)
	{
		if(i == 2) // 이 프로그램에서는 윤년을 감안하지 않습니다.
		{
			sum += 28;
		}
		else if(i % 2 == 0)
		{
			sum += 30;
		}
		else
		{
			sum += 31;
		}
	}
	return sum + day;
}

int main(void)
{
	int month, day;
	scanf("%d %d", &month, &day);
	printf("January 1st to %d %d is the %d days", month, day, getDays(month, day));
	return 0;
}