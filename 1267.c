#include <stdio.h>


int main()
{
	int  n, a[1002] = {NULL},result=0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if (a[i]%5==0)
		{
			result = result + a[i];
		}
	}
	printf("%d", result);
	return 0;
}
