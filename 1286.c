#include <stdio.h>
int a[6] = {NULL}, b= -9999999, c=9999999;
int max()
{
	for (int i = 0; i < 5; i++)
	{
		if (b<a[i])
		{
			b = a[i];
			
		}
	}
	printf("%d\n", b);
	return;
}
min()
{
	for (int i = 0; i < 5; i++)
	{
		if (c > a[i])
		{
			c = a[i];
			
		
		}
	}
	printf("%d", c);
	return;
}
int main()
{
	for (int i = 0; i < 5; i++)
	{
		scanf("%d",&a[i]);
	}
	max();
	min();
}
