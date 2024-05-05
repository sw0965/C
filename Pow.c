#include <stdio.h>
// pow 거듭제곱 연산
#include <math.h> // pow(), obs() 함수 지원
int main(void)
{
	double x = pow(2.0, 20.0); //왼쪽 저항 숫자가 뒤의 제곱이 이루어짐
	printf("2의 20제곱은 %.0f입니다. \n", x);
	return 0;
}