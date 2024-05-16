#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	char name[10];
	double grade;
};

int main(void)
{
	struct student s;
	
	printf("enter student num : ");
	scanf("%d", &s.number);
	printf("enter student name : ");
	scanf("%s", &s.name);
	printf("enter student grade : ");
	scanf("%1f", &s.grade);
	
	

	printf("student num : %d\n", s.number);
	printf("student name : %s\n", s.name);
	printf("student grade : %.f\n", s.grade);
	return 0;
}