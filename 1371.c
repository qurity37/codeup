
#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		for (int j = i+1;j <= a; j++)
		{
			if (j==a)
			{
				printf("*");
		
					for (int m = 0; m < i*2; m++)
					{
						printf(" ");
					}
					printf("*");
			
			}
			else
			{
				printf(" ");
			}
			
		}
		if (i==a-1)
		{

		}
		else
		{
			printf("\n");
		}

	}
	for (int i = a; i >= 0; i--)
	{
		for (int j = a; j >= i+1 ; j--)
		{
			if (j == i+1)
			{
				printf("*");
				for (int m = i * 2; m > 0; m--)
				{
					printf(" ");
				}
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
