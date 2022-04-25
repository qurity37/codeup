#include <stdio.h>
int a, b, c[100] = { NULL }, i = 0;
f()
{
	if (a == 0)
	{
		
		f2();
	}
	else
	{
		c[i] = a % b;
		a /= b;
		i++;
		f();
	}
}
f2()
{
	if (i == 0 )
	{

	}
	else
	{
		i--;
		if (c[i] >= 10)
		{
			c[i] += 55;
			printf("%c", c[i]);
		}
		else
		{
			printf("%d",c[i]);
		}
		f2();
	}
}
int main()
{
	scanf("%d %d", &a, &b);
	f();
}

