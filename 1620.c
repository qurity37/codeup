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
	long long int n;
	scanf("%lld",&n);
	while(1)
	{
		if (n<10)
		{
			break;
		}
		n = f(n);
	}
	printf("%d", n);
}
