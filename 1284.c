# include <stdio.h>
int a[10000000] = { NULL };

int main()
{

	int n, m = 0;


	scanf("%d", &n);

		for (int i = 2; i <= n; i++) {
			if ((i != 2) && (i % 2 == 0))
				continue;
			if ((i != 3) && (i % 3 == 0))
				continue;
			if ((i != 5) && (i % 5 == 0))
				continue;
			if ((i != 7) && (i % 7 == 0))
				continue;
			a[m] = i;

			m++;

		}

		for (int i = 0; a[i] !=0; i++)
		{
			for (int j = 0; a[j] != 0; j++)
			{
				if (a[i] * a[j] == n)
				{
					printf("%d %d", a[i], a[j]);
					return 0;
				}
			}
		}
		printf("wrong number");


}