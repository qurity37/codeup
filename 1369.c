
#include<stdio.h>


int main() {

	int a, b, r;

	scanf("%d %d", &a, &b);


	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i==1||i==a||j==1||j==a)
			{
				printf("*");
			}
			else if(b==1)
			{
				printf("*");
			}
			else if ((i+j) % b == 1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

S