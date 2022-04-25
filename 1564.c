#include <stdio.h>

int a, b;

gcd(int a, int b)
{
	int c=0;
	if (a==1 ||b==1)
	{
		return 1;
	}
	if (a<b)
	{
		for (int i = 1; i <= a/2; i++)
		{
			if (a%i==0&&b%i==0)
			{
				c = i;
			}
		}
	}
	else
	{
		for (int i = 1; i < b/2; i++)
		{
			if (a % i == 0 && b % i == 0)
			{
				c = i;
			}
		}
	}

	return c;
	
}
int main()
{
  scanf("%d%d", &a, &b);
  printf("%d\n", gcd(a, b));
}
