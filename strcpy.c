#include <stdio.h>
#include <string.h>

int main(void)
{
	char input[10] = "I Love You";
	char result[5] = "Love";
	strcpy(result, input); // 첫번째 파라미터에 바뀔 변수, 두번째 파라미터엔 바뀔 값이 들어 있는 변수
	printf("coppy char : %s\n", result);
}