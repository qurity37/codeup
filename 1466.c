#include <stdio.h>
int main()
{
	int i, n,f=0,g=1,h=1,k;
	

	scanf("%d %d", &n,&h);
	g = n * h;
	k = g;
	for ( i = 1; i <= n; i++)
	{
		g = k;
		for (f =1; f <= h; f++)
		{
			
			printf("%d ",g);
			g=g - n;
		}
		k--;
		printf("\n");
		
	}
}



