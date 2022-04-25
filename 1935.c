#include <stdio.h>
LUA(int a,int b)
{
	if (a==b)
	{
		return a;
	}
	else if (a>b)
	{
		return LUA(a / 2, b);
	}
	else
	{
		return LUA(a, b / 2);
	}
}
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	printf("%d", LUA(a,b));
}
