#include <stdio.h>
#include <string.h>
int f(int a,int n,int r)
{

	if (r!=n)
	{
		printf("%d ", r);
		r++;
		f(a, n, r);
	}
	else
	{
		if (n==a+1)
		{
			return 0;
		}
		r = 1;
		n++;
		printf("\n");
		f(a, n, r);
	}

}
int main()
{
	int a,n = 2, r = 1;
	scanf("%d", &a);
	f(a,n,r);
}
