#include <stdio.h>

int  main()
{
	int a,b,c=0;

	scanf("%d %d",&a,&b);

	if (a%2 == 0)
	{
		if (b%2==0)
		{
			printf("짝수+짝수=짝수");
		}
		else
		{
			printf("짝수+홀수=홀수");
		}
	}
	else
	{
		if (b % 2 == 0)
		{
			printf("홀수+짝수=홀수");
		}
		else
		{
			printf("홀수+홀수=짝수");
		}
	}
	
}
