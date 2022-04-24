#include <stdio.h>

int  main()
{
	int a,b,c=0,d=0;

	scanf("%d %d %d",&a,&b,&c);
	if (10<=b)
	{
		if (100<=c)
		{
			printf("%d%d%d", a, b, c);
		}
		else if (10<=c &&100 > c)
		{
			printf("%d%d0%d", a, b, c);
		}
		else
		{
			printf("%d%d00%d", a, b, c);
		}
	}
	else
	{
		if (100 <= c)
		{
			printf("%d0%d%d", a, b, c);
		}
		else if (10 <= c && 100 > c)
		{
			printf("%d0%d0%d", a, b, c);
		}
		else
		{
			printf("%d0%d00%d", a, b, c);
		}
	}
}
