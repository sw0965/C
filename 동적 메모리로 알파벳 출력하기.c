#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *pc = NULL;
	int i = 0;
	pc = (char *)malloc(100 * sizeof(char)); // 하나의 문자가 공간 * 100 
	if(pc == NULL)
	{
		printf("failed 동적 메모리 할당.\n");
		exit(1);
	}
	/* pc 가 가르키는 포인터를 1씩 증가시키며 알파벳 소문자를 삽입합니다. */
	for(i = 0; i < 26; i++)
	{
		*(pc + i) = 'a' + i;
	}
	/* 아스키 코드에서 0 = NULL */
	printf(" i == %d\n", i);
	*(pc + i) = 0;
	printf("%s\n", pc);
	
	free(pc);
	
	return 0;
}