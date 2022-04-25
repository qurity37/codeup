#include <stdio.h>
#include <string.h>
char d[1010];
int dd[1010], dd2[1010] = { NULL }, a = 0, b = 0, rr[1010] = {NULL};
int main()
{
	int sum1 = 0, sum2 = 0,r;
	scanf("%s", d);

	

	for (int i = 0; i <= strlen(d) - 1; i++)
	{
		dd[i] = d[i] - 48;
	}
	a = strlen(d) - 1;
	for (int i = a; i >= 0; i--)
	{
		
		dd2[b] = d[i] - 48;
		b++;
	}


	a = strlen(d) - 1;
	for (int i = 0; i < strlen(d); i++)
	{

		for (int j = a; j > 0; j--)
		{
			dd[i] *= 10;
			dd2[i] *= 10;
		}
		a--;
		sum1 += dd[i];
		sum2 += dd2[i];
	}
	r = sum1 + sum2;
	b = 0;
	
	while (1)
	{
		if (r==0)
		{
			break;
		}
		rr[b] = r % 10;
		r /= 10;
		b++;
	}
	a = b-1;
	for (int i = 0; i < b; i++)
	{
		if (rr[i] == rr[a])
		{

		}
		else
		{
			printf("NO");
			return 0;
		}
		a--;
	}
	printf("YES");
}
