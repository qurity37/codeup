#include "stdio.h"


int main(void)
{
	int a[101][101] = { NULL };

	int n;
	scanf("%d", &n);

	int count = 1;
	int up = 1;
	for (int i = n; i >= 1; i--) 
	{
		if (up == 1)
		{
			int x = n;
			for (int j = n-i+1; j <= n; j++)
			{
				a[x--][j] = count++;
			}
			up = -1;
		}
		else
		{
			int x = n - i + 1;
			for (int j = n; j >= n-i+1; j--)
			{
				a[x++][j] = count++;
			}
			up = 1;
		}
	}
	for (int i = 1; i <= n; i++) 
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

