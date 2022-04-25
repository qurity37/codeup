
#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,b=-1;

	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		
		for (int j = 0; j < a; j++)
		{
			if (i == 0 ||j==0|| j == a - 1||i==a-1)
			{
				printf("*");
			}
			else if (j!=0&&j!=a-1)
			{
				printf(" ");
			}
		}
		printf("\n");
		
	}
	
	
	
}

