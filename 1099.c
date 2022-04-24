#include <stdio.h>
int main()
{
	int a = 0, b = 0, x = 0, y = 0, i = 0;
	int f[12][12] = { 0 };

	for (a = 1; a <= 10; a++)
	{
		for (b = 1; b <= 10; b++)
		{
			scanf("%d", &f[a][b]);
		}
	}

	for (a = 2; a <= 10; a++)
	{

		for (b = 2; b <= 10; b++)
		{
			if (f[a][b] == 0)
			{
				f[a][b] = 9;
			}
			else if (f[a][b] == 1)
			{

				a++;
				b = b - 2;
			}
			else if (f[a][b] == 2)
			{
				f[a][b] = 9;
				goto out;
			}
			{

			}
		}
	}
out:
	for (a = 1; a <= 10; a++)
	{

		for (b = 1; b <= 10; b++)
		{
			printf("%d ", f[a][b]);
		}
		printf("\n");
	}
}



