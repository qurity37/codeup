#include <stdio.h>

int n;
void f(int z)
{
	if (z <=0)
	{
		return;
	}
	f(z - 1);
	printf("*");
}
int main()
{
	scanf("%d", &n);

	f(n);
}
