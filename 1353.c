
#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a;

	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		for (int j = a-i-1; j < a; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	
}

