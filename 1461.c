#include <stdio.h>
int main()
{
	int i, n,f=0,g=0,h=0;
	

	scanf("%d", &n);
	
	for ( i = 1; i <= n; i++)
	{
		g =  n * i;
		for (f =1; f <= n; f++)
		{
			h =h+ n;
			printf("%d ",g);
			g--;
		}
		
		printf("\n");
		
	}
}



