#include <stdio.h>

int  main()
{
	int a,b,c,d=0;

	scanf("%d %d",&a,&b);
	
	a = a / 10000;

	if (b ==1 || b==2)
	{
		for (int i = a; i <= 112; i++)
		{
			d++;
		}
		printf("%d", d);
	}
	else
	{
		for (int i = a; i <= 12; i++)
		{
			d++;
		}
		printf("%d", d);
	}
}
