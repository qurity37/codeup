#include <stdio.h>

int gcd(int p, int q){ if(p==0) return q; return gcd(q%p, p);}

long long int lcm(long long int a,long long int b)
{
	long long int temp = 0;
	if (a>b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	return a / gcd(b, a) * b;
}
int main()
{
  int a, b;
  scanf("%d%d", &a, &b);
  printf("%lld\n", lcm(a, b));
}
