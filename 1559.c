#include <stdio.h>

int n, m;

long long int f()
{
	return (long long int)n +(long long int) m;
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%lld\n", f(n, m));
}
