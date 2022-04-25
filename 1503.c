#include <stdio.h>
int n = 0, i = 0, j, f = 1, l;
int main(void) {
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		
		if (i % 2 != 0)
		{
			for (j = 1; j <= n; j++)
			{

				printf("%d ", f);
				f++;


			}
		}
		else
			{
			f = f + n-1;
			for (l = n; l > 0; l--)
			{
				printf("%d ", f);
				f--;
			}
			f = f + n+1;
			}
		
		printf("\n");
	}

}
