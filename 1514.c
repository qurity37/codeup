#include <stdio.h>
int main()
{

	int a[8][8] = { NULL };
	int c, d;
	for (int i = 1; i <= 7; i++)
	{

		a[4][i] = 1;
	}
	for (int n = 1; n <= 3; n++)
	{
		scanf("%d %d", &c, &d);

		if (a[c][d] == 1)
		{
			a[c][d] = 2;
			for (int i = 0; i <= 7; i++)
			{
				if (a[i][d]==0)
				{
					a[i][d] = 1;
				}
				else if(a[i][d]==2)
				{
					for (int k = 0; k <= 7; k++)
					{
						if (a[i][k]==0)
						{
							a[i][k] = 1;
						}
						
					}
					
				}
				if (a[c][i]==0)
				{
					a[c][i] = 1;
				}
				else if (a[c][i] == 2)
				{
					for (int k = 0; k <= 7; k++)
					{
						if (a[k][i]==0)
						{
							a[k][i] = 1;
						}
						
					}
					
				}
				
			}
			
		}
		else
		{
			a[c][d] = 2;
		}
		


	}

	for (int i = 1; i <= 7; i++)
	{
		for (int j = 1; j <= 7; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}

