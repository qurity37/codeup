#include <stdio.h>

int main()
{
	int d, a[101][101], temp = 1 ,k=0,l=0,result=0;

	scanf("%d",&d);
	
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			a[i][j] = temp;
			temp++;
		}
	}
	for (int i = 1; i <= d; i++)
	{
		for (int j = 1; j <= d; j++)
		{
			if (a[i][j]==a[1][j]||a[i][j]==a[d][j]||a[i][j]==a[i][1]||a[i][j]==a[i][d])
			{
				result = result + a[i][j];
			}
		}
	}

	printf("%d",result);
}
