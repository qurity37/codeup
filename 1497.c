#include <stdio.h>

int main() {
	
	int n,a[101];
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= n; i++)
	{
		if (i%2==0)
		{
			if (a[i] > a[i - 1])
			{
				printf("%d ",a[i]);
			}
			else
			{
				printf("%d ", a[i-1]);
			}
		}
	}
}
