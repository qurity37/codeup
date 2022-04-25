#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, c[101][101] = {NULL};

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			scanf("%d", &c[i][j]);
		}
	}
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			
				c[j + 1][i] += c[j][i];
				
		}
	
	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{

			c[i][j+1] +=c[i][j];

		}

	}
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{

			printf("%d ", c[i][j]);

		}
		printf("\n");

	}
	

		

}
