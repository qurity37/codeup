
#include <stdio.h>

int main(void)
{
	int a[11] = {NULL},reuslt=0, reuslt2 = 0;
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		if (a[i]%2==0)
		{
			if (reuslt <= a[i])
			{
				reuslt = a[i];
			}

		}
		else
		{
			if (reuslt2 <= a[i])
			{
				reuslt2 = a[i];
			}
		}
	}
	if (reuslt2!=0&& reuslt!=0)
	{
		printf("%d %d", reuslt2, reuslt);
	}
	else if (reuslt2 == 0)
	{
		printf("%d", reuslt);
	}
	else if (reuslt == 0)
	{
		printf("%d", reuslt2);
	}
}

