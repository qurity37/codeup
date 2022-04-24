#include <stdio.h>

int  main()
{
	int a,b,c=0,d=0;

	scanf("%d",&a);
	
	d = 13 - a;

	if (d < 0)
	{
		d = 100 + d;
		printf("%d 1", d);
	}
	else
	{
		printf("%d 3",d);
	}
}
