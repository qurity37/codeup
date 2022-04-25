#include <stdio.h>
#include <string.h>

int main()
{
	int n,n2 ,r=0,j=2, mj=0,mi=0;
	scanf("%d %d", &n, &n2);
	for (int i = n; i <= n2; i++)
	{
		r = i;
		j = 1;
		while (r!=1)
		{
			if (r%2==0)
			{
				r /= 2;
			}
			else
			{
				r = 3 * r + 1;
			}
			j++;
		}
	
		if (mj < j)
		{
			mj = j;
			mi = i;
		}
	}
	printf("%d %d", mi, mj);
}
