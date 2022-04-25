#include<stdio.h>
#include <string.h>
int b[10000] = { NULL };
f(int a,int i,int c)
{
	if (a==1)
	{
		if (i==0)
		{
		
			printf("%d\n", c);
		}
		else
		{
			i--;
			printf("%d\n", b[i]);
			f(a, i,c);
		}
	}
	else if (a%2==0)
	{
		a /= 2;
		b[i] = a;
		i++;
		f(a, i, c);
	}
	else if (a%2!=0)
	{
		a =a* 3+1;
		b[i] = a;
		i++;
		f(a, i, c);
	}
}
int main(void)
{
	int a,i=0,c;
	scanf("%d",&a);
	c = a;
	f(a,i,c);
}
