#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int *pi; // Pointer Interger 일반적으로 이렇게 사용된다.
	pi = (int *)malloc(sizeof(int)); // malloc = 메모리를 할당해라. int = 4byte라 4를 넣어도 된다.
	if(pi == NULL)
	{
		printf("failed 동적 메모리 할당.\n");
		exit(1);
	}
	*pi = 100;
	printf("%d\n", *pi);
	/* 동적 메모리 사용한 이후에는 무조건 해당 메모리를 반환한다.*/
	free(pi);
	
	return 0;
}