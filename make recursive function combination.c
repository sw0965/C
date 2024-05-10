#include <stdio.h>

// nCr은 r이 0이거나 n이라면 1이며, nCr(n - 1, r - 1) + nCr(n - 1, r)와 같다

int nCr(int n, int r)
{
	
	if(r == 0 || r == n)
	{
		
		return 1;
	}
	else
	{
		//printf("nCr(%d - 1, %d - 1) + nCr(%d - 1, %d) = nCr(%d, %d)\n", n,r,n,r, ((n- 1) + (n-1)), (r-1)+r);
		printf("n=%d r=%d    nCr(n - 1, r - 1) + nCr(n - 1, r) = %d\n", n,r,nCr(n - 1, r - 1) + nCr(n - 1, r));
		return nCr(n - 1, r - 1) + nCr(n - 1, r);
	}
}

int main(void)
{
	int n, r;
	scanf("%d %d", &n, &r);
	printf("N = %d, R=%d\n", n,r);
	printf("%d", nCr(n, r));
	return 0;
}