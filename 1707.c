#include<stdio.h>
#include <string.h>

int main(void)
{
	int a[11], up = 0, down = 0;;
	float sum = 0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d",&a[i]);
		sum += a[i];
	}
	printf("%.1f\n", sum / 10);

	for (int i = 1; i <= 10; i++)
	{
		if (sum/10 >a[i])
		{
			down++;
		}
		else
		{
			up++;
		}
	}
	printf("%d %d", up, down);
}
