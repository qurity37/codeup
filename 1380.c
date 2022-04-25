
#include <stdio.h>
#include <string.h>
int main(void)
{
	int a,i, j=1;
	scanf("%d",&a);

	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <=6; j++)
		{
			if (i + j == a)
			{
				printf("%d %d\n", i, j);
			}
		}
	
		
	}
	
}

