
#include <stdio.h>
#include <string.h>
int main(void)
{
	int a=0,c=0,b=1;

	scanf("%d",&a);
	c = a;
	for (int i = 1; i <= a; i++)
	{
		if (i%2==0)
		{
			for (int j = c; j >= b; j--)
			{
				printf("%d ", j);
			}
			printf("\n");
			
		}
		else
		{
			for (int j = b; j <= c; j++)
			{
				printf("%d ", j);
			}
			printf("\n");
			
		}
		b = b + a;
		c = c + a;
		
	}


}

