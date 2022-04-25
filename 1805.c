#include <stdio.h>

int a[101] = { NULL }, b[10001] = { NULL };
f(int c)
{
	int temp=0;
	for (int i = 1; i <= c; i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for (int j = 1; j <= c; j++)
	{
		for (int i = 1; i <= c; i++)
		{
			if (a[i] > a[i + 1]&&a[i]!=0&&a[i+1]!=0)
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;

				temp = 0;
				temp = b[i];
				b[i] = b[i + 1];
				b[i + 1] = temp;
			}
		}
	}
	
	return;
}

int main()
{
	int n;
	scanf("%d",&n);
	f(n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d %d\n", a[i], b[i]);
	}
}
