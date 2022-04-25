#include <stdio.h>
f(int a,int i)
{

	if (a==i)
	{
		return 0;
	}
	else
	{
		i++;
		printf("hello\n");
		f(a,i);
	}
}
int main()
{
	int a,i=0;

	scanf("%d",&a);
	f(a,i);
}
