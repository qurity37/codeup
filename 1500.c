#include <stdio.h>

int main() {
	int a[101][101] = {NULL};
	int  b, c;
	scanf("%d %d", &b, &c);

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
