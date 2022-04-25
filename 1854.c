#include <stdio.h>

long long int n;
long long int sum = 0;
int f(long long int z)
{
	
	if (z<=0)
	{
		return sum;
	}
	else
	{
		
		sum =sum + z % 10;
		z = z / 10;
		f(z);
	}
	
	
}
int main()
{
	scanf("%lld", &n);
	printf("%d", f(n));
}
