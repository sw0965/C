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
	s.number = 20150001;
	strcpy(s.name, "Hong Gil Dong");
	s.grade = 4.5;
	printf("student num : %d\n", s.number);
	printf("student name : %s\n", s.name);
	printf("student grade : %.f\n", s.grade);
	return 0;
}