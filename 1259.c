#include <stdio.h>

int  main()
{
	int a, b=0,c=0;

	scanf("%d",&a);
	for (int i = 1; i <= a; i++)
	{
		if (i%2 == 0)
		{
			c = c + i;
		}
	}
	printf("%d ", c);
}
