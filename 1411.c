
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	int a[60] = {0};
	int c = 0, result = 0;
	scanf("%d",&c);
	
	for (int i = 1; i <= c-1; i++)
	{
		scanf("%d", &a[i]);
		
	}
	for (int i = 1; i <= c; i++)
	{
		result = result + i;
	}
	for (int i = 1; i <= c-1; i++)
	{
		result = result - a[i];
	}
	printf("%d",result);
}

