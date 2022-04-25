#include "stdio.h"


int main(void)
{
    int number[1001] = {NULL},n,temp=0;
    scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d",&number[i]);
	}
	for (int i = 1; i <= n; i++)
	{
		printf("%d: ",i);
		for (int j = 1; j <= n; j++)
		{
			if (i==j)
			{

			}
			else if (number[i] == number[j])
			{
				printf("= ");
			}
			else if (number[i] < number[j])
			{
				printf("< ");
			}
			else if (number[i] > number[j])
			{
				printf("> ");
			}
			

		}
		

		printf("\n");
	}

}


