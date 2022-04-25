#include "stdio.h"


int main(void)
{
    int a, b, c,d;
    scanf("%d", &a);
	c = 2;
	d = a - 1;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i==1||i==a)
			{
				printf("*");
			}
			else if (j==1&&i!=1&#include "stdio.h"


int main(void)
{
    int a, b, c,d;
    scanf("%d", &a);
	c = 2;
	d = a - 1;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i==1||i==a)
			{
				printf("*");
			}
			else if (j==1&&i!=1&&i!=a||j==a)
			{
				printf("*");
			}
			else if (i==j&&i==c)
			{
				printf("*");
				c++;
			}
			else if (i != 1 && i != a&&i+j==a+1)
			{
				printf("*");
			}
			else if (i != 1 && i != a&&(a+1)/2==i)
			{
				printf("*");
			}
			else if (i != 1 && i != a && (a + 1) / 2 == j)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


&i!=a||j==a)
			{
				printf("*");
			}
			else if (i==j&&i==c)
			{
				printf("*");
				c++;
			}
			else if (i != 1 && i != a&&i+j==a+1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}


