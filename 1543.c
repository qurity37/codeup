#include <stdio.h>

int n;



f()
{
	for (int i = 0; i < n; i++)
	{
		printf("love\n");
	}
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
