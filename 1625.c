#include <stdio.h>

int a[101] = { NULL }, b[10001] = { NULL };
f(int c)
{
	int temp = c , sum=0;
	while (1)
	{
		if (temp == 0)
		{
			break;
		}
		sum = sum +temp % 10;
		temp = temp / 10;
	}
	return sum;
}
int main()
{
	int n,a=0;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&a);
		while (1)
		{
			if (a < 10)
			{
				break;
			}
			
				a = f(a);
			
			
		}
		printf("%d\n", a);
	}
	
}

