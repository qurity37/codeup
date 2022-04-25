#include <stdio.h>


int f(int n,int z)
{
	if (n==z-1)
	{
		return 0;
	}
	else
	{
		printf("%d\n",n);
		n--;
		f(n, z);
	}
}

int main()
{
	int n,z=1;
	scanf("%d", &n);
	f(n,z);
}
