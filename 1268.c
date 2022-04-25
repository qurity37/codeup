#include <stdio.h>


int main()
{
	int  n, a[1002] = {NULL},result=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if (a[i]%2==0)
		{
			result++;
		}
	}
	printf("%d", result);
	return 0;
}
