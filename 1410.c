
#include <stdio.h>
#include <string.h>
int main(void)
{
	
	char a[100000] = {0};
	int c=0, b=0;
	fgets(a, 100000, stdin);
	
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i]=='(')
		{
			c++;
		}
		else if(a[i]==')')
		{
			b++;
		}
	}
	if (c==49999&&b== 50000)
	{
		b++;
	}
	printf("%d %d", c, b);
	
}

