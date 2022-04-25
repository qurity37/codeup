
#include <stdio.h>

int main(void)
{
	int a, b=0;
	scanf("%d",&a);
	b = a - 1;
	for (int i = 0; i < a; i++)
	{
		for (int c = 0; c < b; c++)
		{
			printf(" ");
		}
		for (int j = 0; j < a; j++)
		{

			printf("*");
			
		}
		printf("\n");
		b--;
	}
}

