#include <stdio.h>


int main()
{
	int  n,result=11,a=2;

	scanf("%d",&n);

	for (int i = 1; i <= n; i++)
	{
		if (result >=11)
		{
			if (result + 10 == i)
			{
				a++;
				result = result+10;
	
			}
		}
		
		

	}
	if (n==1)
	{
		a = 1;
	}
	else if (n==0)
	{
		a == 0;
	}
	printf("%d", a);
}
