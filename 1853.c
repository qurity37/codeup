#include <stdio.h>

int n;
int f(z)
{
	if (z<=1)
	{
		return 1;
	}
	return f(z - 1) + z;
}
int main()
{
	scanf("%d", &n);
	printf("%d", f(n));
}
