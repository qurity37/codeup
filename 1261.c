#include <stdio.h>

int  main()
{
	int a=0, n[11] = {0};

	

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &n[i]);
		if (n[i]%5==0)
		{
			printf("%d", n[i]);
			break;
		}
		else
		{
			a++;
		}
		
	}
	if (a==10)
	{
		printf("0");
	}
}
