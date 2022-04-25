#include <stdio.h>

f(int a ,int j)
{
	if (j!=0)
	{
		printf("*");
		j--;
		f(a,j);
	}
	else if (j==0&&a==0)
	{
		return 0;
	}
	else
	{
		printf("\n");
		a -= 1;
		j = a;
		f(a, j);
	}
;
}
int main()
{
	int a,j=0;
	scanf("%d", &a);
	j = a;
	f(a,j);
}

