#include <stdio.h>

int  main()
{
	int a, b,result;

	scanf("%d %d", &a,&b);

	for (int i = a; i <= b; i++)
	{
		for (size_t j = 1; j <= 9; j++)
		{
			result = i * j;
			printf("%d*%d=%d\n", i, j, result);
		}
	}
}
