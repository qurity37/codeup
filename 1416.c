
#include <stdio.h>

int main()
{
	int n, a[200] = {NULL}, i = 0;

	scanf("%d",&n);

	
	while (1)
	{
		a[i] = n % 2;
		n = n/2;
		i++;
		if (n == 0)
		{
			break;
		}
	}
	for (int j=i-1; j >= 0; j--)
	{
		printf("%d", a[j]);
	}
}
