#include <stdio.h>


int main()
{
	int  n, result = 0;
	long long int a[100000] = {NULL};

	scanf("%d",&n);

	for (int i = 1; i <= n; i++)
	{
		scanf("%lld",&a[i]);

		
	}
	for (int i = 1; i <= n; i++)
	{
		if (result < a[i])
		{
			result = a[i];
		}
	}
	if (n==1)
	{
		result = a[1];
	}

	printf("%lld", result);

}
