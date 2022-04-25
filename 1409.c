
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	int a[11] = {NULL},c;
	

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d",&c);
	for (int i = 1; i <= 10; i++)
	{
		if (c == i)
		{
			printf("%d", a[i]);
			return 0;
		}
	}
}

