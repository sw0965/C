#include <stdio.h>

int main(void)
{
	char x = 'A'; // A = 65 (Ascii code) char x = 65
	// 만약 int x = 65; 라고 해도 아래 printf 에서 char 형 출력이라 알아서 A로 출력된다.
	printf("%c\n", x);
	char y = 65;
	printf("%c\n", y);
	char z = 'B';
	printf("%d\n", z);
	return 0;
}