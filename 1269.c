#include <stdio.h>


int main()
{
	int a, b, c, n,result=0;

	scanf("%d %d %d %d", &a, &b, &c, &n);

	for (int i = 2; i <= n; i++)
	{
		
		if (i==2)
		{
			result = a * b + c;
		}
		else
		{
			result = result * b + c;
		}
		

	}
	if (n==1)
	{
		result = a;
	}
	printf("%d", result);
}
