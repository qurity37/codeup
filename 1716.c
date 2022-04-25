#include <stdio.h>
#include <string.h>
int main()
{
	int m, d,r=0;
	scanf("%d %d", &m, &d);
	if (m==10)
	{
		r = 30 - d;
	}
	else if (m%2==1)
	{
		m= 10 - m;
		r = m * 30 + (m + 1) / 2+(30-d);
	}
	else
	{
		m = 10 - m;
		r = m * 30+(m+1)/2 +( 30 - d);
	}
	printf("%d", r);
}
