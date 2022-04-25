
#include <stdio.h>
#include <string.h>
int main(void)
{
	int a,b,i, j=1;
	scanf("%d %d",&a,&b);

	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <=a; j++)
		{
			if (i ==1&&j==1||i==1&&j==a||i==b&&j==1||i==b&&j==a )
			{
				printf("+");
			}
			else if (i == 1 && j != 1 || i == 1 && j != a || i == b && j != 1 || i == b && j != a)
			{
				printf("-");
			}
			else if (i!=1&&j==1||i!=1&&i==a||i!=a&&j==1||i!=a&&j==a)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
		}
		
			printf("\n");
		
			
	}
	
}

