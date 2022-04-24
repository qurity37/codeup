#include <stdio.h>
int main(void)
{
	long long int a, r, n;
	scanf("%lld %lld %lld", &a, &r, &n);
	int re = r;
	for (int i = 1; i < n-1; i++)
	{
		r *= re;
	}
	printf("%lld", a*r);
	return 0;
}
