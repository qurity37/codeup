#include<stdio.h>

int main(void)
{
	int a[6] = { NULL };
	
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 4; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
}
