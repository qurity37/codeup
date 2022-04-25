
#include <stdio.h>
int a[200];
f(int c ,int i)
{
	if (c==0)
	{
		return i;
	}
	else
	{
		a[i] = c % 2;
		i++;
		c /= 2;
		f(c, i);
	}
}
f2(int i)
{
	if (i==0)
	{

	}
	else
	{
		printf("%d", a[i-1]);
		i--;
		f2(i);
	}
}
int main()
{
	int  c,i=0,j=0;

	scanf("%d", &c);
	if (c==0)
	{
		printf("0");
	}
	j= f(c, i);
	f2(j);
}
