#include <stdio.h>


int main()
{
    int a, b,z=1,c[101][101];
    scanf("%d %d", &a, &b);
	if (b%2!=0)
	{
		for (int i = b; i > 0; i--)
		{
			if (i % 2 == 0)
			{
				for (int j = 1; j <= a; j++)
				{
					c[j][i] = z;
					z++;
				}
				
			}
			else
			{
				for (int j = a; j > 0; j--)
				{
					c[j][i] = z;
					z++;
				}
			}
			
			
			
		}
	}
	else
	{
		for (int i = b; i > 0; i--)
		{
			if (i % 2 == 0)
			{

				for (int j = a; j > 0; j--)
				{
					c[j][i] = z;
					z++;
				}
			}
			else
			{
				for (int j = 1; j <= a; j++)
				{
					c[j][i] = z;
					z++;
				}
			}



		}
	}
	
	for (int i = 1; i <=a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}
