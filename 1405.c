
#include <stdio.h>
int main(void)
{
	int a[10000] = {NULL}, n, k = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	k = n;
	for (int j = 1; j <= n; j++)
	{
		for (int i = j; i <= k; i++)
		{
			printf("%d ", a[i]);
			a[k+1] = a[j];
		}
		k++;
		printf("\n");
	}
	
}
