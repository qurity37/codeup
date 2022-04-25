#include <stdio.h>

int main()
{
	int a, b[101][101] = {NULL},c=1;
	scanf("%d", &a);

	for (int i = 1; i <=a; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 1; j <= a; j++)
			{

				b[j][i] = c;
				c++;
			}
		}
		else
		{
			for (int j = a; j >= 1; j--)
			{
				b[j][i] = c;
				c++;
			}
		}
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
}
