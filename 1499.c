#include "stdio.h"
int main(void)
{
	int n, m,r=0,max=0,k;
	scanf("%d %d", &n, &m);
	while (1)
	{
		max = -1001;
		if (r+m > n&& r!=n)
		{
			
			for (int i = r; i < n; i++)
			{
				scanf("%d", &k);
				if (max < k)
				{
					max = k;
				}
			}
			printf("%d ", max);
			break;
		}
		else if (r==n)
		{
			break;
		}
		for (int i = r; i < m+r; i++)
		{
			scanf("%d", &k);
			if (max <k)
			{
				max = k;
			}
		}
		printf("%d ", max);
		r += m;
	}

}


