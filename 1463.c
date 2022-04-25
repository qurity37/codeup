#include <stdio.h>
int main()
{
	int i, n,f=0,g=1,h=1;
	

	scanf("%d", &n);
	h = n;
	for ( i = 1; i <= n; i++)
	{
		
		g =h;
		for (f =1; f <= n; f++)
		{
			printf("%d ",g);
			g= g + n;
		}
		h--;
		printf("\n");
		
	}
}



