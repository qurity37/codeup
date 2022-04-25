
#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,b=-1;

	scanf("%d",&a);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < i+1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < a-1; i++)
	{
		for (int j = a-1; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
		}
	
	
	
}

