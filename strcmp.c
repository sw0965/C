#include <stdio.h>
#include <string.h>

int main(void)
{
	char inputOne[5] = "B";
	char inputTwo[5] = "B";
	printf("Comparison : %d\n", strcmp(inputOne, inputTwo)); // 두 문자가 사전적으로 동일하면 0 왼쪽이 앞에 있으면 -1 오른쪽이 앞에 있으면 1
}

