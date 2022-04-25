#include <stdio.h>
int main()
{
	int n, m, l,k;
	scanf("%d %d %d",&n,&m,&l);
	k = m - n;
	while (1)
	{
		if (n >l)
		{break;}
		printf("%d ", n);
		n += k;
	}
}

