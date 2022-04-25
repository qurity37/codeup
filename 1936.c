#include <stdio.h>
LUA(int a,int b,int c)
{
	if (a==b)
	{
		return c;
	}
	else if (a>b)
	{
		return LUA(a / 2, b,c+1);
	}
	else
	{
		return LUA(a, b / 2,c+1);
	}
}
int main()
{
	int a, b,c=0;

	scanf("%d %d", &a, &b);

	printf("%d", LUA(a,b,c));
}
