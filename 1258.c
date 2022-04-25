#include <stdio.h>

int  main()
{
	int a, b=0;

	scanf("%d",&a);
	for (int i = 0; i <= a; i++)
	{
		b = b + i;
	}
	printf("%d",b);
}
