#include <stdio.h>

int n, m;
max()
{
	if (n <m)
	{
		return m;
	}
	else
	{
		return n;
	}
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", max(n, m));
}
