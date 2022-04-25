#include <stdio.h>

int  main()
{
	int a, b, c = 0, d = 0;


	scanf("%d %d %d", &a, &b,&c);
	
	if (a <b-c)
	{
		printf("advertise");
	}
	else if (a> b-c)
	{
		printf("do not advertise");
	}
	else if (a == b-c)
	{
		printf("does not matter");
	}
}
