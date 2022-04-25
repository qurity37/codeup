#include <stdio.h>
int main(void)
{

	int i, j, a,f=1;

	scanf("%d",&a);
	for ( i = 1; i <=a; i++)
	{
		for ( j=1; j <= a; j++)
		{
			printf("%d ", f);
			
			f++;
		}
		printf("\n");
	}
}

