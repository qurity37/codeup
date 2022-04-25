
#include <stdio.h>
int main(void)
{
	int a, b, g = 1, h = 1, k = 1;

	scanf("%d %d", &a, &b);
	for (int i = a ; i > 0; i--)
	{
		g =g *i;

	}
	for (int i = a - b ; i > 0; i--)
	{
		h = h * i;
	}
	for (int i = b ; i > 0; i--)
	{
		k = k * i;
	}
	printf("%d", g / (h * k));
}
