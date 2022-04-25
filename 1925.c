#include <stdio.h>

f(int n, int r)
{
	if (r==0|r==n)
	{
		return 1;
	}
	return f(n - 1, r - 1) + f(n - 1,r);
}
int main()
{
	int n, r;
	scanf("%d %d" ,&n,&r);

	printf("%d", f(n, r));
}
