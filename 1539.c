#include <stdio.h>

int n;





f() 
{
	if (n!=0)
	{
		printf("true");
	}
	else
	{
		printf("false");
	}
	
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
