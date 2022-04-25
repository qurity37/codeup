#include <stdio.h>

int n, m;
min()
{
	if (n <m)
	{
		return n;
	}
	else
	{
		return m;
	}
}
int main()
{
  scanf("%d%d", &n, &m);
  printf("%d\n", min(n, m));
}
