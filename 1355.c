
#include <stdio.h>
#include <math.h>
int main(void) 
{
	int a,b=-1;

	scanf("%d",&a);

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a-i; j++)
		{
			printf("*");
		}
		printf("\n");
		while(b!=i)
		{
			printf(" ");
			b++;
		}
		b = -1;
	}
	
	
	
}

