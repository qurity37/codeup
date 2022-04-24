#include <stdio.h>

int  main()
{
	int a,b,c=0,d=0,e=0;

	scanf("%d",&a);
	c = a / 10;
	d = a - c * 10;
	e = (d * 10 + c)*2;

	if (e >= 100)
	{
		e = e - 100;
		if (e <= 50)
		{
			printf("%d\nGOOD", e);
		}
		else
		{

			printf("%d\nOH MY GOD", e);
		}
	}
	else
	{
		if (e <= 50)
		{
			printf("%d\nGOOD", e);
		}
		else
		{

			printf("%d\nOH MY GOD", e);
		}
	}
	
}
