
#include <stdio.h>
int main(void) 
{
	int a, b,g=0;

	scanf("%d",&a);
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= g; j++)
		{
			printf("*");
		}
		g = g +a;
		 if (i!=1)
		{
			 printf("\n");
		}
	}
		
	
}

