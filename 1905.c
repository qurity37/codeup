#include <stdio.h>


int f(int n,int z,int sum)
{
	if (n+1==z)
	{
		printf("%d\n", sum);
		return 0;
	}
	else
	{
		sum += z;
		z++;
		
		f(n, z,sum);
	}
}

int main()
{
	int n,z=1,sum=0;
	scanf("%d", &n);
	f(n,z,sum);
}
