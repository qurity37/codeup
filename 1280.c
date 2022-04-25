#include <stdio.h>
int a, b,result=0;
int num()
{
	for ( a; a <= b; a++)
	{
		if (a%2==0)
		{
			result = result - a;
			printf("%d",-a);
		}
		else
		{
			result = result + a;
			printf("+%d", a);
		}
	}
	return result;
}
int main()
{
 int result;

	scanf("%d %d",&a,&b);
	
	printf("=%d",num(a));
}
