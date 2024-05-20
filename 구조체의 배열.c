#include <stdio.h>
#define SIZE 5

struct student {
	int number;
	char name[20];
	double grade; // 학점
};



int main(void)
{
	struct student list[SIZE];
	int i;
	
	for(i = 0; i < SIZE; i++)
	{
		printf("insert student number : ");
		scanf("%d", &list[i].number);
		printf("insert student name : ");
		scanf("%s", &list[i].name);
		printf("insert student grade : ");
		scanf("%lf", &list[i].grade);
	}
	
	for(i=0; i < SIZE; i++)
	{
		printf("num : %d, name : %s, grade %.1f\n", list[i].number, list[i].name, list[i].grade);
	}
	
	return 0;
}