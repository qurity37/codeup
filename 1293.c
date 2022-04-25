
#include <stdio.h>
int main(void) 
{
	int a[101] = { NULL },max=-999999999,min=999999999,n;

	scanf("%d", &n);


	for (int i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
		if (a[i] >max)
		{
			max = a[i];
		}
		if (a[i]<min)
		{
			min = a[i];
		}
	}
	printf("%d %d", max, min);
	
}

