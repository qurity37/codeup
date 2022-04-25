#include <stdio.h>

int main()
{
	int d, a[12][12], temp = 0;

	for (int i = 1; i <= 11; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}

	for (int i = 1; i <= 10; i++)
	{
		temp = 0;
		for (int j = 10; j >= 1; j--)
		{
			
			if (a[j][i] == 0&&a[11][i]==1)
			{
				temp++;
			}
			if (temp == 10 )
			{
				if (a[11][i] == 1)
				{
					printf("%d safe\n", i);
					break;
				}
				
			}
			else if (a[j][i] > 0)
			{
				if (a[11][i] == 1)
				{
					printf("%d crash\n", i);
					break;
				}

			}
			else if (a[j][i] < 0)
			{
				if (a[11][i] == 1)
				{
					printf("%d fall\n", i );
					break;
				}
			}
			

		}

	}

}
