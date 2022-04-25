#include <stdio.h>

long long int n;




long long  int abs()
{
	if (0 >n)
	{
		return -n;
	}
	else
	{
		return n;
	}
	
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
