#include <stdio.h>
int main()
{
	int i,n,z=1,j;
	int a[100] = {0};

	scanf("%d", &n);
	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
		{
			printf("%d ",z);
			z++;
		}
		printf("\n");
	}
}



