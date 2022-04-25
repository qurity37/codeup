#include <stdio.h>

int main()
{
	char a[101];
	int n, m;
	fgets(a, 101, stdin);

	scanf("%d %d", &n, &m);

		for (int i = n-1; i < m; i++)
		{
			printf("%c", a[i]);
		}
		
}
