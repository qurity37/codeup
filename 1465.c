#include <stdio.h>
int main()
{
	int i, n,f=0,g=1,h=1;
	

	scanf("%d %d", &n,&h);
	g = n * h;
	for ( i = 1; i <= n; i++)
	{
		
		g = g - h+1;
		for (f =1; f <= h; f++)
		{
			
			printf("%d ",g);
			g++;
		}
		g = g - h-1;
		printf("\n");
		
	}
}



