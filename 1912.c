#include <stdio.h>
f(int j,int result)
{
	if (j==0)
	{
		return result;
	}
	else
	{
		result =result * j;
		j--;
		f(j, result);
	}
}
int main()
{
	int a,j=0,result=0;
	scanf("%d", &a);
	result = a;
	j = a-1;
	printf("%d",f(j, result));
}
