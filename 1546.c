#include <stdio.h>

int n;



zero()
{
	if (n==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
plus() 
{
	if (n > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
  scanf("%d", &n);
  if(zero(n)) printf("zero");
  else printf("%s", plus(n)?"plus":"minus");
  return 0;
}
