#include <stdio.h>
#include <string.h>
int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a==0)
	{
		switch (b)
		{
		case 0:
			printf("tie");
			break;
		case 1:
			printf("win");
			break;
		case 2:
			printf("lose");
			break;
		default:
			break;
		}
	}
	else if (a==1)
	{
		switch (b)
		{
		case 0:
			printf("lose");
			break;
		case 1:
			printf("tie");
			break;
		case 2:
			printf("win");
			break;
		default:
			break;
		}
	}
	else if (a == 2)
	{
		switch (b)
		{
		case 0:
			printf("win");
			break;
		case 1:
			printf("lose");
			break;
		case 2:
			printf("tie");
			break;
		default:
			break;
		}
	}
	
}

