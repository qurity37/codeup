#include <stdio.h>
int f(int n, int d[], int i)
{
	if (i >= n + 1)
	{
		return d[n];
	}
	d[i] = d[i - 1] + d[i - 2];
	i++;
	f(n, d, i);
}
int main()
{
	int n, d[22], i = 3;
	d[1] = 1;
	d[2] = 1;
	scanf("%d", &n);

	printf("%d", f(n, d, i));
}
