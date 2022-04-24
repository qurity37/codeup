#include <stdio.h>

int  main()
{
	int a, b, c = 0, d = 0;


	scanf("%d %d %d", &a, &b, &c);

	if (a > b)
	{
		if (a > c)
		{
			if (a < b + c)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
		}
		else
		{

			if (c < a + b)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}

		}
	}
	else
	{
		if (b > c)
		{
			if (b < a + c)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}
		}
		else
		{

			if (c < a + b)
			{
				printf("yes");
			}
			else
			{
				printf("no");
			}

		}

	}
}
