
#include "stdio.h"
int n, r[101][101];

int main(void)
{
	

	scanf("%d", &n);
	int sx, sy;
	scanf("%d %d", &sx, &sy);
	r[sx][sy] = 1;
	for (int i = 1; i < 6; i++)
	{
		r[sx + i][sy] = 1 + i;
		r[sx][sy+i] = 1 + i;
		r[sx - i][sy] = 1 + i;
		r[sx][sy - i] = 1 + i;
	}
	int cnt = 3,o=0;
	while (1)
	{
		o = 0;
		for (int z = 0; z < 2; z++)
		{


			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					if (r[i][j] == cnt - 1 && r[i + 1][j] == 0)
					{
						r[i + 1][j] = cnt;
					}
					if (r[i][j] == cnt - 1 && r[i - 1][j] == 0)
					{
						r[i - 1][j] = cnt;
					}
					if (r[i][j] == cnt - 1 && r[i][j + 1] == 0)
					{
						r[i][j + 1] = cnt;
					}
					if (r[i][j] == cnt - 1 && r[i][j - 1] == 0)
					{
						r[i][j - 1] = cnt;
					}

					if (r[i][j] == 0)
					{
						o = 1;
					}
				}


			}
		}
			if (o==0)
			{
				break;
			}
			cnt++;
	
	}
	

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			printf("%d ", r[i][j]);
		}
		printf("\n");
	}
}



