
#include <stdio.h>

int main(void)
{
	int a, b = 0, g = 0, h = 0;
	char c;
	scanf("%d %d %c", &a, &b,&c);
	for (int i = 0; i < a; i++)
	{
		if (c == 'L')
		{
			for (int d = 0; d < g; d++)
			{
				printf(" ");
			}
		}
		else
		{
			for (int f = 0; f < a - i-1; f++)
			{
				printf(" ");
			}
		}
		for (int j = 0; j < b; j++)
		{

			printf("*");

		}
		if (a==i-1)
		{
			return 0;
		}
		else {
			printf("\n");
		}

		
		g++;
	}
}

