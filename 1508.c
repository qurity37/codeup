#include <stdio.h>

int main()
{
	int d,a[21][21], temp;

	scanf("%d", &d);

	for (int i = 1; i <= d; i++)
	{
		scanf("%d",&a[i][1]);
	}

	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= i;j++)
		{
			if (j==1)
			{
				printf("%d ", a[i][1]);
			}
			else if(j==2)
			{
				a[i][j] = a[i][1] - a[i - 1][1];
				printf("%d ", a[i][j]);
			}
			else
			{
				a[i][j] = a[i][j-1] - a[i - 1][j-1];
				printf("%d ", a[i][j]);
			}
			

		}
		printf("\n");
	}
}
