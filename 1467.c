#include <stdio.h>
int main(void)
{

	int n, m, a, b, c;
	int i, j;
	scanf("%d %d", &n, &m);
	a = n * m;
	b = a - n + 1;
	for (i = 1; i <= n; i++)
	{
		c = b;
		for (j = 1; j <= m; j++)
		{

			printf("%d ", c);
			c = c - n;
		}
		printf("\n");
		b++;
	}
}

