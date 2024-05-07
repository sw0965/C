#include <stdio.h>

// 전역 변수
int hour;
int minute;
int minuteAdd;

void counter()
{
	minute += minuteAdd;
	hour += minute / 60;
	minute %= 60;
	hour %= 24;
	//return minute;
}

int main(void)
{
	printf("enter the hour :");
	scanf("%d", &hour);
	printf("enter the min :");
	scanf("%d", &minute);
	printf("enter the min to add :");
	scanf("%d", &minuteAdd);
	counter();
	printf("added time is %dh %dm.\n", hour, minute);
	return 0;
}