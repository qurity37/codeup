
#include <stdio.h>
#include <string.h>
int main(void)
{
	int a = 0, c = 0, b = 1;
	int number[10000] = {0};
	scanf("%d %d",&a,&b);

	
	for (int i = 0; i < a; i++)
	{
		scanf("%d",&number[i]);
	}
	for (int i = 0; i < a; i++)
	{

		for (int j = i; j < a; j++)
		{
			if (number[i] > number[j]&&number[j]!=0)
			{
				a = number[i];
				number[i] = number[j];
				number[j] = a;

			}

		}
	}
	for (int j = 0; number[j] != 0; j++)
	{
		printf("%d ",number[j]);
		c++;
		if (c==b)
		{
			printf("\n");
			c = 0;
		}
	}
	


}

