#include <stdio.h>
int main()
{
	int a,i;


	scanf("%d", &a);

	for ( i = 0; a >= 60; i++)
	{
		a = a - 60;
	}
		printf("%d %d",i,a);
	
}
