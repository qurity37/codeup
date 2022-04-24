#include <stdio.h>

int  main()
{
	int a, b,c=0;

	scanf("%d %d",&a,&b);

	if (a>=b)
	{
		c = a - b;
	}
	else
	{
		c = b - a;
	}
	printf("%d", c);
}
