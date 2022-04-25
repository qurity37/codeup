#include <stdio.h>
int main()
{
	int a[101] = { NULL }, b, temp = 0;

	scanf("%d", &b);
	for (int i = 1; i <= b; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j < b; j++)
		{
			if (a[j] < a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}


	for (int i = 1; i <= b; i++)
	{
		printf("%d ", a[i]);
	}
}
