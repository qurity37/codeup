#include <stdio.h>


int main()
{
	int  a,b,c=0,d=0, result = 0;
	

	scanf("%d %d",&a,&b);


	if (a % 2 == 0)
	{
		a=a / 2 * 10;
	}
	else
	{
		a = (a + 1) / 2;
	}

	if (b% 2 == 0)
	{
		b = b / 2 * 10;
	}
	else
	{
		b = (b + 1 )/ 2;
	}
	printf("%d", a + b);
	
}
