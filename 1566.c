#include <stdio.h>

int a, n;
#include <stdio.h>

int a, n;
long long int pow()
{
	long long int result;

	result = a;
    if(a==1)
    {
        return 1;
    }
	if (a>1&&n==0)
	{
		return a / 2;
	}
	for (int i = 2; i <= n; i++)
	{
		result = result * a;
		
	}
	return (long long int)result;
}

int main()
{
  scanf("%d%d", &a, &n);
  printf("%lld\n", pow(a, n));
}
