#include <stdio.h>
int n=0, i=0, j=0,f=0;
int main(void) {
	scanf("%d", &n);

	for ( i = 1; i <= n; i++)
	{
		f = i;
		for (j = 1; j <= n; j++)
		{
			printf("%d ",f);
			f = f + n;
		}
		printf("\n");
	}

}
