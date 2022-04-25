#include <stdio.h>
#include <string.h>

int main()
{
	int n, m,r=1;

	scanf("%d %d", &n, &m);

	for (int i = 2; i <= n; i++)
	{
		if (n % i == 0&&m%i==0)
		{
			r=i;
		}
	}
	m = m / r;
	n = n / r;

	printf("%d %d", n, m);
}
