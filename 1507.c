#include <stdio.h>
int a, b, c, d, z = 1, k[101][101] = { NULL };
f()
{
	int kk=0;
	for (int i = 0; i <= 101; i++)
	{
		for (int j = 0; j <= 101; j++)
		{
			if (k[i][j] == 1)
			{
				kk++;
			}
			
		}
	}
	return kk;

}

int main()
{
	for (int l = 1; l <= 4; l++)
	{
		
		scanf("%d %d %d %d", &a, &b, &c, &d);

		for (int i = a; i < c; i++)
		{
			for (int j = b; j < d; j++)
			{
				k[i][j] = 1;
			}

		}
		
	}
	printf("%d", f());
	

}
