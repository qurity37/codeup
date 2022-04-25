#include <stdio.h>
int main()
{
	char a[11] = { NULL };
	char b[5] = { NULL }, c[5] = { NULL }, d[5] = { NULL };

	for (int i = 0; i < 10; i++)
	{
		scanf("%c", &a[i]);
	}
	scanf("%s %s %s", b, c, d);

	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			if (a[i] == b[j])
			{
				printf("%d", i);
			}
		}
	}
		printf(" ");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (a[i] == c[j])
				{
					printf("%d", i);
				}
			}
			
		}
		printf(" ");
		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (a[i] == d[j])
				{
					printf("%d", i);
				}
			}
		}
	
}
