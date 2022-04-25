#include <stdio.h>

int main()
{
	int a, v[51] = {NULL}, v2[51] = { NULL },temp=0;
	char name[51][51] = { 0 };
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		scanf("%s %d", name[i], &v[i]);
		v2[i] = v[i];
	}
	for (int j = 1;j <= 100;j++)
	{
		for (int i = 1; i <= a-1; i++)
		{

			if (v2[i] > v2[i + 1] )
			{
				temp = v2[i];
				v2[i] = v2[i + 1];
				v2[i + 1] = temp;
			}


		}
	}
	for (int i = 1; i <= a; i++)
	{
		if (v[i] == v2[a - 2])
		{
			printf("%s", name[i]);
			return 0;
		}
	}
}
