#include <stdio.h>

int n;




f()
{
	int i = 0;
	int last = n / 2;
	for ( i = 2; i <= last; i++)
	{
		if ((n%i)==0)
		{
			printf("composite");
			return;
		}
		
	}
	
	printf("prime");
	return;
}

int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
