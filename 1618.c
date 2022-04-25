#include <stdio.h>
#include <string.h>
char d[1010];
int dd[1010], dd2[1010],a=0,b=0;
int main()
{
	int a[4] = { NULL },temp=0;

	for (int i = 1; i <= 3; i++)
	{
		scanf("%d",&a[i]);
	}
	for (int j = 0; j < 3; j++)
	{
		for (int i = 1; i <= 2; i++)
		{
			if (a[i] > a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}

		}
	}
	
	for (int i = 1; i <= 3; i++)
	{
		printf("%d ", a[i]);
	}
}
