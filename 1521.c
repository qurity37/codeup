
#include <stdio.h>
int a, b,c=0,result=0;
int ac[51][51] = {NULL};

int main()
{
	
	scanf("%d %d", &a, &b);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			scanf("%d", &ac[i][j]);
		}
	}
	for (int i =0; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (ac[i][j]==-1)
			{
				
			}
			else 
			{

				ac[i][j] = ac[i][j]+b;
				
				
			}
		}
		
	}
	for (int i =0 ; i < a; i++)
	{
		for (int j = 0; j < a; j++)
		{
			if (ac[i][j]!=-1&&ac[i][j] <= 5)
			{
				c++;

			}
			
		}
		
	}
	printf("%d", c);
}
