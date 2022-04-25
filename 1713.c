#include <stdio.h>
int main()
{

	int k, n,result=0;

	scanf("%d %d", &k, &n);


	for (int i = k; i <=n; i++)
	{
		if (i%3==0&&i%4!=0)
		{
			result += i;
		}
		else if (i%4==0&&i%3!=0)
		{
			result -= i;
		}
	}

	printf("%d", result);
}

