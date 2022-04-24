#include <stdio.h>

int  main()
{
	int a,b,c,d=10;

	scanf("%d %d %d",&a,&b,&c);
	if (a>=b)
	{
		if (b>=c)
		{
			d = c;
			printf("%d", d);
		}
		else
		{
			d = b;
			printf("%d", d);
		}
	}
	else
	{
		if (a>=c)
		{
			d = c;
			printf("%d", d);
		}
		else
		{
		
			d = a;
			printf("%d", d);
		}
		
	}
}
