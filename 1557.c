#include <stdio.h>

int n;




f() {
	int a = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			a++;
		}
	}
	return a;
}
int main()
{
  scanf("%d", &n);
  printf("%d\n", f(n));
}
