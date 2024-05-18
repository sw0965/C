#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main(void)
{
	struct rect r;
	int w, h, area, peri;
	
	printf("enter left top cord : ");
	scanf("%d %d", &r.p1.x, &r.p1.y);
	
	printf("enter right top cord : ");
	scanf("%d %d", &r.p2.x, &r.p2.y);
	
	w = abs(r.p2.x - r.p1.x);
	h = abs(r.p2.y - r.p1.y);
	
	area = w * h;
	peri = 2 * w + 2 * h;
	
	printf("사각형 넓이는 %d 이고, 둘레는 %d 입니다.", area, peri);
	
	return 0;
	
	
}