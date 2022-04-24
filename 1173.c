#include <stdio.h>

int  main()
{
	int a,b,c=0,d=0;

	scanf("%d %d",&a,&b);
	
	c = b - 30;
	if (c < 0)
	{
		
		
		if (a == 0)
		{
			a = a - 1;
			c = c + 60;
			a = a + 24;
			printf("%d %d", a, c);
		}
		else
		{
			a = a - 1;
			c = c + 60;
			printf("%d %d", a, c);
		}
	}
	else 
	{
		
		printf("%d %d", a, c);
	}
}
