#include <stdio.h>

f(int a ,int j,int i)
{
	if (j!=i)
	{
		printf("*");
		j++;
		f(a,j,i);
	}
	else if (j==a)
	{
		return 0;
	}
	else
	{
		printf("\n");
		i++;
		j = 0;
		f(a, j, i);
	}
;
}
int main()
{
	int a,j=0,i=1;
	scanf("%d", &a);
	
	f(a,j,i);
}

