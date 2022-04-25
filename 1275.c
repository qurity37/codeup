#include <stdio.h>


int main()
{
	int  a,b=0,i,result=0;
	

	scanf("%d %d",&a,&b);
	result = a;

	for (i = 2; i <= b; i++)
	{
		result = result * a;
		
	}

	if (b==0)
	{
		result = 1;
	}
	printf("%d", result);
	
}
