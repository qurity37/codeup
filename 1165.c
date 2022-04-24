#include <stdio.h>

int  main()
{
	int a,b,c,d=0;

	scanf("%d %d",&a,&b);
	
	for (int i = a; i < 90; i)
	{
		i = i + 5;

		b++;
	}
	printf("%d",b);
}
