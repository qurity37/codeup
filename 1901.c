#include <stdio.h>


int f(int n,int z)
{
	if (n+1==z)
	{
		return 0;
	}
	else
	{
		printf("%d\n",z);
		z++;
		f(n, z);
	}
}

int main()
{
	int n,z=1;
	scanf("%d", &n);
	f(n,z);
}
