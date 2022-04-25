#include <stdio.h>
#include <math.h>
int num(int a)
{
	return floor(log10(a) + 1);
}
int main()
{
	int  a, i, result = 0;

	scanf("%d", &a);


	
	printf("%d",num(a));
}
