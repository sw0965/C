#include <stdio.h>

int main(void)
{
	char o;
	int x, y;
	while(1) //1은 항상 참값이기 때문에 무한반복
	{
		printf("enter a formula : ");
		scanf("%d %c %d", &x, &o, &y);
		if(o == '+')
		{
			printf("%d %c %d = %d\n", x, o, y, x+y);
		}
		else if(o == '-')
		{
			printf("%d %c %d = %d\n", x, o, y, x-y);
		}
		else if(o == '*')
		{
			printf("%d %c %d = %d\n", x, o, y, x*y);
		}
		else if(o == '/')
		{
			printf("%d %c %d = %d\n", x, o, y, x/y);
		}
		else if(o == '%')
		{
			printf("%d %c %d = %d\n", x, o, y, x%y);
		}
		else
		{
			printf("input is not valid.\n");
		}
		getchar(); // 버퍼 즉 줄바꿈을 효율적으로 처리가 가능
		printf("Do you want to end program? (y/n)"); // 엔터를 치는 동시에 else 문이 작동함 c 언어에서는 버퍼를 처리해줘야함
		scanf("%c", &o);
		if(o == 'n' || o == 'N')
		{
			continue;
		}
		else if(o == 'y' || o == 'Y')
		{
			break;
		}
		else
		{
			printf("type error.\n");
		}
	}
	
	return 0;
}