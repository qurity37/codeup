#include <stdio.h>
int main(void)
{

	int a[3] = {NULL};
	int b=0,c=0,d=0,i,f;


	for ( i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	b = a[0];

	if (a[0]<=a[1])
	{
		if (a[1]<=a[2])
		{
			b = a[0];
			c = a[1];
			d = a[2];

		}
		else
		{

			if (a[0]>a[2])
			{
				b = a[2];
				c = a[0];
				d = a[1];
			}
			else
			{
				b = a[0];
				c = a[2];
				d = a[1];
			}
		}
	}
	else if (a[0]>=a[1])
	{
		if (a[1] > a[2])
		{
			b = a[2];
			c = a[1];
			d = a[0];

		}
		else
		{
			if (a[0] > a[2])
			{
				b = a[1];
				c = a[2];
				d = a[0];
			}
			else
			{
				b = a[2];
				c = a[1];
				d = a[0];
			}
		}
	}
	else if (a[0]==a[1]==a[2])
	{
		b = a[0];
		c = a[1];
		d = a[2];
	}
	printf("%d %d %d",b, c,d);
}

