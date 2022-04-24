#include <stdio.h>

int  main()
{
	int a,b,c=0;

	scanf("%d %d",&a,&b);
	if (a>=b)
	{
		c = a;
		printf("%d", c);
	}
	else
	{
		c = b;
		printf("%d", c);
	}
}
