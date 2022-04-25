#include <stdio.h>

long long int n, m;
long long int f(long long int n,long long int m)
{
	long long int resutl = 0;
	if (n>m)
	{
		resutl =	n - m;
		return resutl;
	}
	else
	{
		resutl =m - n;
		return resutl;
	}
}
int main()
{
  scanf("%lld%lld", &n, &m);
  printf("%lld\n", f(n, m));
}
