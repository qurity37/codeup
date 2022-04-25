#include <stdio.h>

int n;



f()
{
	if (n>0)
	{
		printf("positive");
	}
	else if(n==0)
	{
		printf("zero");
	}
	else
	{
		printf("negative");
	}
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
