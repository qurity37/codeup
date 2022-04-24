#include <stdio.h>

int  main()
{
	int a,b,c,d=0;

	scanf("%d",&a);
	
	
	if (a%4==0 && a%100 != 0 || a%400==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
