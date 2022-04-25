
#include <stdio.h>
int main(void)
{
	int a[100] = {NULL}, n, k = 0, l[200000] = { NULL };
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < 2; j++)
	{
		for (int i = 1; i <= n; i++)
		{
			printf("%d\n", a[i]);
		}
	}
	
}
