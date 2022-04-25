#include <stdio.h>
int main()
{
	int i, n,f=0,g=1,h=0;
	

	scanf("%d", &n);
	
	for ( i = 1; i <= n; i++)
	{
		g = i;
		for (f =1; f <= n; f++)
		{
			printf("%d ",g);
			g= g + n;
		}
		
		printf("\n");
		
	}
}



