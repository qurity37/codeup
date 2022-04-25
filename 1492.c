#include <stdio.h>

int main()
{
	int n, a[1000] = { NULL };

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		if (i==1)
		{
			printf("%d ",a[i]);
		}
		else
		{
			a[i] = a[i] + a[i - 1];
			printf("%d ", a[i]);
		}
	}
}
