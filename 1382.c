
#include <stdio.h>
#include <string.h>
int main(void)
{
	int i, j=1;
	for ( j = 1; j <= 9; j++)
	{
		for (i = 2; i <= 5; i++)
		{
			
				if (i !=5)
				{
					printf("%d x %d = %2d\t", i, j, i * j);
					
				}
				else
				{
					printf("%d x %d = %2d\n", i, j, i * j);
				}
			
		}
		
	}
	
}

