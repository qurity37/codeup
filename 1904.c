#include <stdio.h>


int f(int n,int z)
{
	if (n-1==z)
	{
		
		return 0;
	}
	else
	{
		if (n%2!=0)
		{
			printf("%d ", n);
			n++;
			f(n, z);
		}
		else
		{
			n++;
			f(n, z);
		}
		
	}
}

int main()
{
	int n,z;
	scanf("%d %d", &n,&z);
	f(n,z);
}
