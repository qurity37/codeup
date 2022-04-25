#include <stdio.h>
f(int n, int i,int l)
{
	if (1+n==l)
	{
		return 0;
	}
	else if (i==l)
	{
		l++;
		i = 1;
		printf("*\n");
		f(n, i, l);
	}	
	else
	{
		i++;
		printf("*");
		f(n, i, l);
	}
	
	
}
int main()
{
	int n,i=1,l=1;

	scanf("%d", &n);

	f(n, i,l);
	
}

