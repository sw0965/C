#include <stdio.h>

// 배열
/* 

char array[10]; 인 경우 영어는 10 한글은 5
영어 한글자당 1 byte
한글 2 byte

포인터는 배열 array => 포인터
array[1]=7 일때 
&array[1]=메모리 주소값 

*/

int main(void)
{
	char input[1001];
	gets(input); // 엔터를 칠때까지 입력이 input 안에 들어간다
	int count = 0;
	while(input[count] != '\0') // \0 null 값 * Hello를 입력했을때 뒤에는 null 값으로 채워진다.
	{
		count++;
	}
	printf("char length = %d\n", count);
	printf("string is = %s", input); // %s 도 위 while 문과 같이 null 값이 보일때까지 문자를 출력하는 원리
	return 0;
}