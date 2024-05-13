#include <stdio.h>


// pointer 

// 두 변수의 값을 서로 변환하는 포인터 함수

void swap(int *x, int *y) // 인트형의 어떠한 값을 가르키는 포인터 x 를 만들었다
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;

}


int main(void)
{
	int x = 1;
	int y = 2;
	swap(&x, &y);
	printf("x = %d\ny = %d\n", x, y);
	return 0;
}

// 포인터(*) 를 사용하지 않으면 함수로 들어간 x y값은 매개변수로서 들어와서 함수 내에서만 사용되기 떄문에 함수가 종료가 되면 메인 함수에는 영향을 끼치지 못해 포인터를 사용하지 않으면 값이 변경되지 않는다