#include<stdio.h>
#include <string.h>
f(int a)
{
	if (a==1)
	{
		
	}
	else if (a%2==0)
	{
		a /= 2;
		printf("%d\n", a);
		f(a);
	}
	else if (a%2!=0)
	{
		a =a* 3+1;
		printf("%d\n", a);
		f(a);
	}
}
int main(void)
{
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
	f(a);
}
