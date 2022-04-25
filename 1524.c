#include <stdio.h>
int n = 0, i = 0, j, f = 0, l=0 ,m=0,z=0;
int a[11][11] = { NULL };
int main(void) {

	for ( i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d %d", &l, &f);
	if (a[l][f] == 0)
	{
		if (a[l][f + 1] == 1)
		{
			m++;
		}
		if (a[l][f - 1] == 1)
		{
			m++;
		}
		if (a[l - 1][f] == 1)
		{
			m++;
		}
		if (a[l + 1][f] == 1)
		{
			m++;
		}
		if (a[l - 1][f + 1] == 1)
		{
			m++;
		}
		if (a[l - 1][f - 1] == 1)
		{
			m++;
		}
		if (a[l + 1][f + 1] == 1)
		{
			m++;
		}
		if (a[l + 1][f - 1] == 1)
		{
			m++;
		}
	
		printf("%d", m);
	}
	else if (a[l][f] == 1)
	{
		printf("-1");

		return 0;

	}
	else if (a[l][f]==a[9][1])
	{
		if (a[l -1][f] == 1)
		{
			m++;
		}
		if (a[l - 1][f+1] == 1)
		{
			m++;
		}
		if (a[l][f+1] == 1)
		{
			m++;
		}
	}
	else if (a[l][f] == a[1][1])
	{
		if (a[l][f+1] == 1)
		{
			m++;
		}
		if (a[l + 1][f + 1] == 1)
		{
			m++;
		}
		if (a[l+1][f] == 1)
		{
			m++;
		}
	}
	else if (a[l][f] == a[1][9])
	{
		if (a[l][f-1] == 1)
		{
			m++;
		}
		if (a[l + 1][f - 1] == 1)
		{
			m++;
		}
		if (a[l+1][f] == 1)
		{
			m++;
		}
	}
	else if (a[l][f] == a[9][9])
	{
		if (a[l - 1][f] == 1)
		{
			m++;
		}
		if (a[l -1][f - 1] == 1)
		{
			m++;
		}
		if (a[l][f - 1] == 1)
		{
			m++;
		}
	}
	
	


}
